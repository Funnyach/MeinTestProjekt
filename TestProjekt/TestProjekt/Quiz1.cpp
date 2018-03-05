#include "stdafx.h"
#include <iostream>
#include "IO.h"

void quiz1() {
	int number1;
	int number2;
	std::cout << "Bitte geben Sie mir eine Zahl: ";
	number1 = readNumber();

	std::cout << "Bitte geben Sie mir eine zweite Zahl: ";
	number2 = readNumber();
	
	writeAnswer(number1+number2);
}

