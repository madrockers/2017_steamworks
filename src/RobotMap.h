// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "WPILib.h"
#include "AnalogPotentiometer.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<SpeedController> driveTrainRightController;
	static std::shared_ptr<SpeedController> driveTrainLeftController;

//	static std::shared_ptr<SpeedController> driveTrainRightController;
		static std::shared_ptr<SpeedController> shooterMotor;
	static std::shared_ptr<RobotDrive> driveTrainRobotDrive;
	static std::shared_ptr<Encoder> driveTrainLeftEncoder;
	static std::shared_ptr<Encoder> driveTrainRightEncoder;
	//Gear Grab
	static std::shared_ptr<Encoder> gearGrab1;
	static std::shared_ptr<Encoder> gearGrab2;
	static std::shared_ptr<SpeedController> gearGrab1Motor;
	static std::shared_ptr<SpeedController> gearGrab2Motor;
	static std::shared_ptr<AnalogPotentiometer> gearGrabPot;
	static std::shared_ptr<SpeedController> gearLiftMotor;
	//Feeder

	//Pot Gear Life

	//


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<SpeedController> Gear_Grab_Left_Wing;
	static std::shared_ptr<SpeedController> Gear_Grab_Right_Wing;
	static std::shared_ptr<SpeedController> Gear_Lift;
	static void init();
};
#endif
