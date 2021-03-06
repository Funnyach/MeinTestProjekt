// TestProjekt.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "quizzes.h"
#include "StandardLibraryIncludes.h"
#include "Structs.h"
#include "RNG.h"


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
	

	double highestTemperatures[365]{0};

	int letsSwap = 3;
	int yeahLets = 5;
	std::swap(letsSwap, yeahLets);

}


void stdArrayStuff() {
	std::array<int, 10> stdArray{ 3, 5, 9, 2, 1, 80, 32, 0, 3 };
	cout << stdArray.size() << "\n";
	cout << stdArray.at(3) << "\n";
	std::sort(stdArray.begin(), stdArray.end());
	
	// foreach loop makes copies of the elements
	for (auto element : stdArray) {
		element = 2;
	}

	// more efficient, no copies created
	for (const auto &element : stdArray) {
		cout << element << "\n";
	}
}


void stdVectorStuff() {
	std::vector<int> stdVector{ 3, 4, 5, 6, 8 };
	// selection at index with/without bounds checking
	stdVector.at(0);
	stdVector[0];

	int length = stdVector.size();

	// computationally expensive. first one changes length (fills 0s where needed), other one just reserves memory
	stdVector.resize(9);
	stdVector.reserve(10);

	// stack functions: push_back = push; back = look at the top element; pop_back = pop
	stdVector.push_back(3);
	stdVector.push_back(10);
	stdVector.back();
	stdVector.pop_back();
}



int main(int argc, char *argv[])
{
	cout << argc << "\n";
	cout << argv[0] << "\n";
	//playAround();
	//stdArrayStuff();
	//callQuizzes();
	//printRandomNumbers(100, 1, 50);

	return 0;
}
