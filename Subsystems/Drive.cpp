/**
 * @file Drive.cpp
 * @brief Implementation of the Drive subsystem
 * @author William Kunkel
 */

#include "Drive.h"
#include "../RobotMap.h"
#include "../Commands/CheesyDrive.h"

/**
 * Initialize the PID controllers for each side of the drive, and enable them,
 * with an initial setpoint of 0.0.
 *
 * @author William Kunkel
 */
Drive::Drive() : 
	Subsystem("Drive"),
	leftMotor( new Talon( DIGITAL_MODULE_PORT,
	                      LEFT_DRIVE_CHANNEL ) ),

	rightMotor( new Talon( DIGITAL_MODULE_PORT,
	                       RIGHT_DRIVE_CHANNEL ) ) {
}

void Drive::InitDefaultCommand() {
	SetDefaultCommand( new CheesyDrive() );
}

/**
 * Drive each motor independently at a speed given as a percentage of the
 * maximum speed.
 *
 * @param[in] leftSpeed The percentage for the left motor, from -1.0 to 1.0
 * @param[in] rightSpeed The percentage for the right motor, from -1.0 to 1.0
 *
 * @author William Kunkel
 */
void Drive::setMotorsNormalized( float leftSpeed, float rightSpeed ) {
	leftMotor->Set( leftSpeed );
	rightMotor->Set( rightSpeed );
}
