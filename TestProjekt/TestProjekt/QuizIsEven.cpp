#include "stdafx.h"
#include <iostream>

// takes an integer 'number', returns whether it is even as a bool
bool checkEven(int number) {
	if (number % 2 == 0)
		return true;
	else
		return false;
}

// 'number' holds the number to be checked for whether it is even or not
void even(){
	int number;
	std::cin >> number;
	if (checkEven(number))
		std::cout << "This number is even.\n";
	else
		std::cin >> "This number is odd.\n";
}