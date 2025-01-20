
#include "RobotInterfaces.h"

int main(){

  // create a robot object as a pointer to RobotSimple class
  Robot * robot = new RobotSimple;

  // create a robot object as a pointer to RobotMoving class
  //this gives as a new operation for the same type class
  Robot * movingRobot = new RobotMoving(robot);
  movingRobot->operation();

  Robot * shootingRobot = new RobotShooting(movingRobot);
  shootingRobot->operation();

  Robot * cameraRobot = new RobotCamera(robot);
  cameraRobot->operation();

  delete robot;
  delete movingRobot;
  delete shootingRobot;
  delete cameraRobot;
  
  return 0;
}