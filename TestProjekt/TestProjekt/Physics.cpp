#include "stdafx.h"
#include "PhysicsConstants.h"
#include <cmath>

double calcDistance(double startDistance, double velocity, double acceleration, double time) {
	double distance;
	distance = startDistance + (velocity*time) + (acceleration / 2.0) * pow(time, 2);
	return distance;
}

// startDistance
double calcFallDistance(double startDistance, double velocity, double time) {
	return calcDistance(startDistance, velocity, physicsConstants::erdbeschlaeunigung, time);
}