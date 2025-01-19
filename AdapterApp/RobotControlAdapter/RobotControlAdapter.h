#ifndef ROBOTCONTROLADAPTER_H
#define ROBOTCONTROLADAPTER_H

#include <iostream>
#include <cmath>
#include "RobotControl.h"
#include "RobotNewControl.h"


/** @brief: a class to use old interface to move robot in a new coordinates 
 *  @param x - x coordinate
 * @param y - y coordinate
 */
class RobotControlAdapter  : public RobotControl{
  public:
    void MoveTo(double x, double y) override;
};

#endif