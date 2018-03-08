#include "stdafx.h"
#include <iostream>
#include "IO.h"

void quiz1() {
	std::cout << "Bitte geben Sie mir eine Zahl: ";
	double number1{ readNumber() };

	std::cout << "Bitte geben Sie mir eine zweite Zahl: ";
	double number2 = { readNumber() };
	
	writeAnswer(number1+number2);
}

