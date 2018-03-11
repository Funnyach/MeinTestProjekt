#include "stdafx.h"
#include <iostream>


int digit;
int getUserInput() {
	std::cout << "Sag mir eine Zahl zwischen 0 und 4096 die ich in Binaer umwandeln soll: ";
	int zahl;
	std::cin >> zahl;
	return zahl;
}


void writeNextDigit(int number) {
	if (number > 0) {
		++digit;
		if (number % 2 == 1) {
			number -= 1;
			number /= 2;
			writeNextDigit(number);
			std::cout << 1;
			
		}
		else {
			number /= 2;
			writeNextDigit(number);
			std::cout << 0;
		}
		
		--digit;
		if (digit % 4 == 0) {
			std::cout << " ";
		}
	}
	else {
		for (int i = digit % 4; i > 0; i--) {
			std::cout << "0";
		}
	}
}

void writeAsBinary(int decimalNumber) {
	digit = 0;
	writeNextDigit(decimalNumber);
	std::cout << "\n";
}

void binaryConverter() {


	writeAsBinary(getUserInput());
}

