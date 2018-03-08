#include "stdafx.h"
#include <iostream>
#include <cstdint>

double readNumber() {
	double userInput;
	std::cin >> userInput;
	return userInput;
}

char readCharacter() {
	char userInput;
	std::cin >> userInput;
	return userInput;
}

void writeAnswer(double answer) {
	std::cout << std::endl << "Das Ergebnis Ihrer Rechnung ist: " << answer << "." << std::endl << std::endl;
}

void printMessage(char message[]) {
	std::cout << message;
}

void printNumber(double number) {
	std::cout << number;
}

