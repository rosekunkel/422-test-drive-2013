/**
 * @file RobotMap.h
 * @brief A mapping for ports on the robot
 *
 * Defines the port numbers for each module / digital sidecar port /
 * solenoid module port as global constants.
 *
 * @author William Kunkel
 * @author Nyle Rodgers
 */

#ifndef ROBOT_MAP_H
#define ROBOT_MAP_H

#include "WPILib.h"

/**
 * @defgroup modulePorts cRIO Module Port Numbers
 * @{
 */
const UINT8 DIGITAL_MODULE_PORT = 2;
/**@}*/



// TODO: Get real port numbers

/**
 * @defgroup pwmChannels PWM Channel Numbers
 * @{
 */
// PWM channels for the drivebase
const UINT32 LEFT_DRIVE_CHANNEL = 0,
	         RIGHT_DRIVE_CHANNEL = 0;
/**@}*/

#endif // ROBOT_MAP_H
