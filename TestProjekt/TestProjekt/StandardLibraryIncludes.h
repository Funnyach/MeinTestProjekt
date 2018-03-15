#pragma once
#ifndef STANDARDLIBRARYINCLUDES_H
#define STANDARDLIBRARYINCLUDES_H

#include <iostream>
#include <cstdint>
#include <string>
#include <cmath>

// for Sleep(milliseconds)
#include <Windows.h>

// this is for rand() (returns a 'random' number) and srand() (sets the starting seed)
#include <cstdlib>

// this is for mersenne, a better randomizer than rand(). for implementation details see rng.cpp (or http://www.learncpp.com/cpp-tutorial/59-random-number-generation/)
#include <random>

// this if for time() (returns the system time in seconds since midnight 1st january 1970)
#include <ctime>

#endif // STANDARDLIBRARYINCLUDES_H