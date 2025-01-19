#pragma once
#include "Robot.h"

class RobotDecorator : public Robot{
  protected:
  Robot * robot_;
  public:
  RobotDecorator(Robot * robot) : robot_(robot){}
};

class RobotSimple : public Robot{
  public:
  void operation () override;
  RobotSimple() : Robot(){};
};

class RobotMoving : public RobotDecorator{
  public :
  RobotMoving(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};

class RobotShooting : public RobotDecorator{
  public :
  RobotShooting(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};

class RobotCamera : public RobotDecorator{
  public :
  RobotCamera(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};