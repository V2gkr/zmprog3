#ifndef ROBOTCONTROL_H
#define ROBOTCONTROL_H

class RobotControl{
  public:
    virtual void MoveTo(double x, double y) = 0;
};

#endif
