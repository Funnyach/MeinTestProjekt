// TestProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "quizzes.h"
#include "StandardLibraryIncludes.h"
#include "Structs.h"
#include "RNG.h"

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

//using namespace std;
using std::cin;
using std::cout;
using std::getline;
using std::string;



void callQuizzes() {

//	quiz1();
//	std::cout << isPrime(3) << "\n";
//	int_fast16_t testInt = 4;
//	calculator();
//	dropBall();
//	binaryConverter();
	monsterQuiz();
}

void playAround() {
	
	Hunter ceebly{ "Charge Blade", 100, "Val Hazaak"};

	string name;
	int age;
	cout << "Enter your full Name: ";

	getline(cin, name);

	cout << "Enter your Age: ";
	cin >> age;

	//useful cin stuff
	cin.ignore(32767, '\n');
	if (cin.fail())
		cin.clear();

	cout << "You've lived "<< static_cast<double>(age)/name.length() << " years for each letter in your name.";


	std::bitset<8> bits;
	bits.set(0);
	bits.set(2);
	int zaehler{ 10 };
	int nenner{ 4 };
	int x = { 7 };
	int y = { -8 };
	int biggerNumber{ (x > y) ? x : y };




	for (int i = 0; i < 100; i++) {
		srand(time(0));
		rand();
		cout << getRandomNumber(1, 100) << " ";
		if ((i + 1) % 10 == 0) {
			cout << "\n";
		}
		Sleep(1000);
	}
}

int main()
{
//	playAround();
//	callQuizzes();
	printRandomNumbers(100, 1, 50);

	return 0;
}
