// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	std::shared_ptr<Joystick> xbox;
	std::shared_ptr<JoystickButton> bbutton;
	std::shared_ptr<JoystickButton> abutton;
	std::shared_ptr<Joystick> xbox2;

	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getXbox();
	std::shared_ptr<Joystick> getXbox2();


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	float Xaxis;
	float Yaxis;
	double fwd_back()
	{
		if(fabs(xbox->GetRawAxis(1)>0.15))
		{
			Xaxis = xbox->GetRawAxis(1);

		}
		else
		{
			Xaxis = 0;
		}
		return Xaxis;
	}
	double left_right()
	{
		if(fabs(xbox->GetRawAxis(4)>0.15))
		{
			Yaxis = xbox->GetRawAxis(4);
		}
		else
		{
			Yaxis = 0;
		}
		return Yaxis;
	}
};

#endif
