// TestProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "quizzes.h"
#include "IO.h"
#include <cstdint>
#include <cmath>

/*Notizen:
* Fixed length Integers: std::int#_t
* Performance in Integers: std::int_fast#_t 
* Memory conservation in Integers: std::int_least#_t
* (where # is the number of bits)
*
* Datatype Precision: http://www.learncpp.com/cpp-tutorial/25-floating-point-numbers/
* Escape sequences: http://www.learncpp.com/cpp-tutorial/27-chars/
* Precedence in code-resolving table: http://www.learncpp.com/cpp-tutorial/31-precedence-and-associativity/
*/
int main()
{
//	quidz1();
//	td::cout << isPrime(3) << "\n";
//	int_fast16_t testInt = 4;
//	calculator();

//	dropBall();
	int zaehler = 10;
	int nenner = 4;
	int x = 7;
	int y = 10;
	printf("test");
	int biggerNumber = (x > y) ? x : y;
	std::cout << biggerNumber;
	return 0;
	
}
