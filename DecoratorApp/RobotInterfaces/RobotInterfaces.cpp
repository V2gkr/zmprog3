#include "RobotInterfaces.h"
#include <iostream>


void RobotSimple::operation(){
  std::cout << "Robot sample operation" <<"\n";
}

void RobotMoving::operation(){
  std::cout << "Robot moving somewhere..." <<"\n";
}

void RobotShooting::operation(){
  std::cout << "Robot shooting with something" <<"\n";
}

void RobotCamera::operation(){
  std::cout << "Robot observing something with camera" <<"\n";
}