#ifndef BULLET_SIM_H
#define BULLET_SIM_H

#include <btBulletDynamicsCommon.h>
#include "b3RobotSimulatorClientAPI_NoGUI.h"
#include "b3RobotSimulatorClientAPI_InternalData.h"
#include "../Utils/b3Clock.h"
#include <thread>

class BulletSim {
public:
    BulletSim();
    ~BulletSim();

    void startSimulation(); // This function will initiate the simulation thread

private:
    void simulationThread(); // The provided function wrapped inside the class
    std::thread simulation_thread;

    b3RobotSimulatorClientAPI_NoGUI* sim;
};

#endif // BULLET_SIM_H
