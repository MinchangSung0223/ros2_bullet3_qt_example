#include "mainwindow.h"

#include <stdio.h>

#include "BulletSim.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#define ASSERT_EQ(a, b) assert((a) == (b));

#include <QApplication>
#include <thread>


#include <btBulletDynamicsCommon.h>
#include "b3RobotSimulatorClientAPI_NoGUI.h"
#include "b3RobotSimulatorClientAPI_InternalData.h"
#include "../Utils/b3Clock.h"

#include "rclcpp/rclcpp.hpp"
#include "hyu_robot_states/msg/robot_states.hpp"
#include <chrono>
#include <memory>

using namespace std::chrono_literals;
class RobotStatesPublisherNode : public rclcpp::Node
{
public:
  RobotStatesPublisherNode()
      : Node("robot_states_publisher")
  {

    
    robot_states_publisher_ = create_publisher<hyu_robot_states::msg::RobotStates>("robot_states", 10);
    robot_state_timer_ = create_wall_timer(std::chrono::microseconds(1000), std::bind(&RobotStatesPublisherNode::publish_robot_state, this));
    
    sim = new b3RobotSimulatorClientAPI_NoGUI();
    bool isConnected = sim->connect(eCONNECT_DIRECT);
    sim->resetSimulation();
    sim->setGravity(btVector3(0, 0, -9.8));
    sim->setNumSolverIterations(100);
    b3RobotSimulatorSetPhysicsEngineParameters args;
    double CONTROL_RATE = 1000.0;
    btScalar fixedTimeStep = 1. / CONTROL_RATE;
    sim->setTimeStep(fixedTimeStep);
    sim->getPhysicsEngineParameters(args);

    robotId = sim->loadURDF("/home/robot/catkin_ws/src/ros2_bullet3_qt_example/urdf/satellite/arm.urdf");
    printf("robotId = %d\n", robotId);

    time = 0.0;
    dt = fixedTimeStep;

    
    t=0;
  }

private:
  rclcpp::TimerBase::SharedPtr robot_state_timer_;
  rclcpp::Publisher<hyu_robot_states::msg::RobotStates>::SharedPtr robot_states_publisher_;
  double t;
  double time;
  double dt;
  int robotId;
  b3RobotSimulatorClientAPI_NoGUI* sim;

  void publish_robot_state()
  {
    //ROS TOPIC
    t = t+0.001;
    
    time += dt;
    static int print_cnt = 0;    
    if (++print_cnt >= 1000) {
        printf("%.3f\n", time);
        print_cnt = 0;
    }
    int numJoints = sim->getNumJoints(this->robotId);
    sim->stepSimulation();
    //b3Clock::usleep(1000. * 1000. * fixedTimeStep);
    
    double hz = 100;
    auto robot_state_msg = hyu_robot_states::msg::RobotStates();
    robot_state_msg.header.stamp = this->now();
    robot_state_msg.name = {"joint_0","joint_1","joint_2","joint_3","joint_4","joint_5","joint_6"};
    robot_state_msg.robot_joint_position = {sin(hz*2.0*3.141592*t),0,0,0,0,0,0};
    robot_states_publisher_->publish(robot_state_msg);
    //std::cout<<"DODODO"<<std::endl;

  }

};

int main(int argc, char *argv[])
{
    
    rclcpp::init(argc, argv);
    //BulletSim bSim;
	//bSim.startSimulation();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Start ROS2 node in a separate thread
    auto node = std::make_shared<RobotStatesPublisherNode>();
    std::thread ros_thread([node]() {
        rclcpp::spin(node);
    });

    // This will block until the Qt application exits
    int ret = a.exec();

    // Shutdown ROS2 and join the thread
    rclcpp::shutdown();
    ros_thread.join();

    return ret;
    
}
