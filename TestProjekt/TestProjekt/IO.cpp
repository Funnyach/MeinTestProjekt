#include "stdafx.h"
#include <iostream>

int readNumber() {
	int userInput;
	std::cin >> userInput;
	return userInput;
}

void writeAnswer(int answer) {
	std::cout << std::endl << "Ihre beiden Zahlen ergeben addiert " << answer << "." << std::endl << std::endl;
}