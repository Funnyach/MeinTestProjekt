#include "stdafx.h"
#include <iostream>


int getUserInput() {
	std::cout << "Sag mir eine Zahl zwischen 0 und 4096 die ich in Binaer umwandeln soll: ";
	int zahl;
	std::cin >> zahl;
	return zahl;
}


void writeNextDigit(int number, int &digit) {
	if (number > 0) {
		if (number % 2 == 1) {
			number -= 1;
			number /= 2;
			writeNextDigit(number, ++digit);
			std::cout << 1;
			
		}
		else {
			number /= 2;
			writeNextDigit(number, ++digit);
			std::cout << 0;
		}
		
		--digit;
		if (digit % 4 == 0) {
			std::cout << " ";
		}
	}
	else {
		if (digit % 4 != 0) {
			for (int i = 4-(digit % 4); i > 0; i--) {
				std::cout << "0";
			}
		}
	}
}

void writeAsBinary(int decimalNumber) {
	int digit = 0;
	writeNextDigit(decimalNumber, digit);
	std::cout << "\n";
}

void binaryConverter() {


	writeAsBinary(getUserInput());
}

