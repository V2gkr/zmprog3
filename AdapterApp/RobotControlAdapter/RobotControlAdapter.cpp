#include "RobotControlAdapter.h"
#include "RobotNewControl.h"


void RobotControlAdapter::MoveTo(double x, double y){
      // Call of RobotNewControl
      static RobotNewControl robotNewControl;
      double angle=atan2(y,x)*180/3.14159265;
      double distance=sqrt(x*x+y*y);
      robotNewControl.MoveTo(angle,distance);
}