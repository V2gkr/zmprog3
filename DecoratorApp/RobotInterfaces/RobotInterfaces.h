#pragma once
#include "Robot.h"

/** @brief: decorator class derived from base robot
 *  @param robot_ : pointer to robot object
 *  @constructor: base consturctor , initializes robot_ with robot as input parameter
 */
class RobotDecorator : public Robot{
  protected:
  Robot * robot_;
  public:
  RobotDecorator(Robot * robot) : robot_(robot){}
};

/** @brief: simple robot class derived from base robot
 *  @constructor: base constructor
 */
class RobotSimple : public Robot{
  public:
  void operation () override;
  RobotSimple() : Robot(){};
};

/** @brief: robot moving class derived from robot decorator
 *  @constructor: base constructor based on robot decorator 
 */
class RobotMoving : public RobotDecorator{
  public :
  RobotMoving(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};

/** @brief: robot shooting class derived from robot decorator
 *  @constructor: base constructor based on robot decorator 
 */
class RobotShooting : public RobotDecorator{
  public :
  RobotShooting(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};

/** @brief: robot camera class derived from robot decorator
 *  @constructor: base constructor based on robot decorator 
 */
class RobotCamera : public RobotDecorator{
  public :
  RobotCamera(Robot * robot): RobotDecorator(robot){}
  void operation () override;
};