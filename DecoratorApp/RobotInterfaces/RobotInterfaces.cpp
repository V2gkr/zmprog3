#include "RobotInterfaces.h"
#include <iostream>

/** @brief: operation of RobotSimple class */
void RobotSimple::operation(){
  std::cout << "Robot sample operation" <<"\n";
}

/** @brief: overriden operation in RobotMoving derived class */
void RobotMoving::operation(){
  std::cout << "Robot moving somewhere..." <<"\n";
}

/** @brief: overriden operation in RobotShooting derived class */
void RobotShooting::operation(){
  std::cout << "Robot shooting with something" <<"\n";
}

/** @brief: overriden operation in RobotCamera derived class */
void RobotCamera::operation(){
  std::cout << "Robot observing something with camera" <<"\n";
}