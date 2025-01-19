#ifndef ROBOTNEWCONTROL_H
#define ROBOTNEWCONTROL_H

/** @brief: class to an interface for a robot to move in certain direction
 *  @param angle - angle to rotate
 *  @param distance - distance to move
 */
class RobotNewControl{
  public:
    void MoveTo(double angle, double distance);
};

#endif