#include "stdafx.h"
#include "IO.h"

double calculate(double zahl1, double zahl2, char rechenzeichen) {
	if (rechenzeichen == '+')
		return zahl1 + zahl2;
	if (rechenzeichen == '-')
		return zahl1 - zahl2;
	if (rechenzeichen == '*')
		return zahl1*zahl2;
	if (rechenzeichen == '/')
		return zahl1 / zahl2;
	return 0;
}

bool isRechenzeichen(char rz) {
	if (rz != '+' && rz != '-' && rz != '*' && rz != '/')
		return false;
	return true;
}

void calculator() {
	printMessage("Bitte geben Sie zwei Zahlen zwischen -32.768 und 32767 ein.\nZahl 1: ");
	double nummer1 = readNumber();
	
	char rechenzeichen;
	printMessage("\n Bitte geben Sie ein Rechenzeichen ein (+ - * /)");
	rechenzeichen = readCharacter();

	printMessage("\n Zahl 2: ");
	double nummer2 = readNumber();

	if (isRechenzeichen(rechenzeichen)) {
		double answer = calculate(nummer1, nummer2, rechenzeichen);
		writeAnswer(answer);
	}

	
}