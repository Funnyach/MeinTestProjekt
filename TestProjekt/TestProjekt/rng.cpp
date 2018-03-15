#include "stdafx.h"
#include "StandardLibraryIncludes.h"


using std::cout;

int getRandomNumber(int min, int max)
{
	
	static const double fraction = 1.0 / (RAND_MAX + 1.0);  
	return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}

/*
int getRandomNumber(int min, int max) {
	static std::random_device rd;
	static std::mt19937 mersenne{ rd() };

	static const double fraction = 1.0 / (mersenne.max() + 1.0);
	return min + static_cast<int>((max - min + 1) * (mersenne() * fraction));
}

*/

void printRandomNumbers(int count, int min, int max) {
	cout << "\n";
	for (int i = 0; i < count; i++) {
		cout << "\t" << getRandomNumber(min, max);
		if ((i + 1) % 10 == 0)
			cout << "\n\n";
	}
}

