#ifndef PUBLISHER_H_
#define PUBLISHER_H_

#include "rclcpp/rclcpp.hpp"
#include "robot_states/msg/address_book.hpp"

class RobotStatePublisher : public rclcpp::Node
{
public:
    RobotStatePublisher();

private:
    void timer_callback();
    rclcpp::Publisher<YOUR_PACKAGE_NAME::msg::RobotState>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

#endif  // PUBLISHER_H_
