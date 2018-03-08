#include "stdafx.h"
#include "IO.h"
#include "PhysicsCalculations.h"


void dropBall() {
	double height;
	printMessage("How high is your tower (in meters)?\n");
	height = readNumber();
	printMessage("How long has the ball been falling for (in seconds)?\n");
	double time;
	time = readNumber();
	
	double distanceFromGround;
	distanceFromGround = height - calcFallDistance(0, 0, time);

	printMessage("You ball is ");
	printNumber(distanceFromGround);
	printMessage(" meters from the ground.\n");
}
