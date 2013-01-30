/**
 * @file Drive.h
 * @brief Declaration of the Drive subsystem
 * @author William Kunkel
 */

#ifndef DRIVE_H
#define DRIVE_H

#include "WPILib.h"

/**
 * @brief The Drive subsystem
 * 
 * Controls the drive base of the robot.
 */
class Drive: public Subsystem {
public:
	/// Constructor for the Drive subsystem
	Drive();

	void InitDefaultCommand();

	/// Set the motors as a percentage of their top speed, from -1.0 to 1.0.
	void setMotorsNormalized( float leftSpeed, float rightSpeed );

private:
	Talon *leftMotor, *rightMotor;
};

#endif // DRIVE_H
