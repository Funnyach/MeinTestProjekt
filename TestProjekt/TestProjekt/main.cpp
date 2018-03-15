// TestProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "quizzes.h"
#include "IO.h"
#include <cstdint>
#include <cmath>

// this is for a more readable and easier way to use bitwise operations
#include <bitset>

/*Notizen:
* Fixed length Integers: std::int#_t
* Performance in Integers: std::int_fast#_t 
* Memory conservation in Integers: std::int_least#_t
* (where # is the number of bits)
*
* Datatype Precision: http://www.learncpp.com/cpp-tutorial/25-floating-point-numbers/
* Escape sequences: http://www.learncpp.com/cpp-tutorial/27-chars/
* Precedence in code-resolving table: http://www.learncpp.com/cpp-tutorial/31-precedence-and-associativity/
* Close enough equality checker: http://www.learncpp.com/cpp-tutorial/35-relational-operators-comparisons/ 
*/

void callQuizzes() {

//	quiz1();
//	std::cout << isPrime(3) << "\n";
//	int_fast16_t testInt = 4;
//	calculator();
//	dropBall();
	binaryConverter();
}

void playAround() {
	//using namespace std;
//	using std::cout;
	std::bitset<8> bits;

	bits.set(0);
	bits.set(2);


	int zaehler{ 10 };
	int nenner{ 4 };
	int x = { 7 };
	int y = { -8 };
	int biggerNumber{ (x > y) ? x : y };
	cout << "x: " << x << "y: " << y << "\n";
	cout << "~x: " << ~x << "~y: " << ~y;
//	std::cout << biggerNumber << "\n";
}

int main()
{
//	playAround();
	callQuizzes();
	return 0;
}
