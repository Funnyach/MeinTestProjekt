#include "stdafx.h"
#include <iostream>

double nummer1; 
double nummer2;
char rechenzeichen;
double getUserInput();

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

void communicateWithUser() {
	std::cout << "Bitte geben Sie zwei Zahlen zwischen -32.768 und 32767 ein.\nZahl 1: ";
	nummer1 = getUserInput();

	std::cout << "\n Bitte geben Sie ein Rechenzeichen ein (+ - * /)";
	rechenzeichen = getUserInput();

	std::cout << "\n Zahl 2: ";
	nummer2 = getUserInput();
	
}

double getUserInput() {
	double input;
	std::cin >> input;
	return input;
}

void printAnswer(double result) {

	std::cout << "Das Ergebnis deiner Rechnung " << nummer1 << " " << rechenzeichen << " " << nummer2 << " ist " << result;
}

void calculator() {
	
	communicateWithUser();

	if (isRechenzeichen(rechenzeichen))
		printAnswer(calculate(nummer1, nummer2, rechenzeichen));
	
}