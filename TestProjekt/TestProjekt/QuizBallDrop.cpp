#include "stdafx.h"
#include <iostream>
#include "PhysicsCalculations.h"




void dropBall() {
	double height;
	std::cout << "How high is your tower (in meters)?\n";
	std::cin >> height;
	std::cout << "How long has the ball been falling for (in seconds)?\n";
	double time;
	std::cin >> time;
	
	double distanceFromGround;
	distanceFromGround = height - calcFallDistance(0, 0, time);

	std::cout << "You ball is ";
	std::cout << distanceFromGround;
	std::cout << " meters from the ground.\n";
}
