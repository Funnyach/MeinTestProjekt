#include "stdafx.h"
#include <iostream>

void quiz1() {
	std::cout << "Bitte geben Sie mir eine Zahl: ";
	double addend1;
	std::cin >> addend1; 

	std::cout << "Bitte geben Sie mir eine zweite Zahl: ";
	double addend2;
	std::cin >> addend2; 

	std::cout << "Ihre Zahlen ergeben addiert: " << addend1 + addend2;
}