#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  frontTouch,     sensorTouch)
#pragma config(Sensor, dgtl8,  sonarCM,        sensorSONAR_cm)
#pragma config(Motor,  port2,           rightMotor,    tmotorServoStandard, openLoop)
#pragma config(Motor,  port3,           leftMotor,     tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (1 == 1)
{

	startMotor(leftMotor, vexRT[Ch3]);
	startMotor(rightMotor, -vexRT[Ch2]);

}
}
