
#include "RobotInterfaces.h"

int main(){
  // RobotMoving robotMoving;
  // RobotShooting robotShooting;
  // RobotCamera robotCamera;

  // robotMoving.operation();
  // robotShooting.operation();
  // robotCamera.operation();
  Robot * robot = new RobotSimple;
  Robot * movingRobot = new RobotMoving(robot);
  movingRobot->operation();

  Robot * shootingRobot = new RobotShooting(movingRobot);
  shootingRobot->operation();

  Robot * cameraRobot = new RobotCamera(robot);
  cameraRobot->operation();

  return 0;
}