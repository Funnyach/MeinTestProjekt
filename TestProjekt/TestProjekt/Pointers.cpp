#include "stdafx.h"
#include "StandardLibraryIncludes.h"

void createPointers() {

	int value = 10;
	
	//non-constant pointer to non-constant variable: can change variable value via dereferencing, can change pointer value
	int *vPointer = &value;

	//non-constant pointer to constant variable: cannot change variable value via dereferencing, can change pointer value
	const int *vcPointer = &value;

	//constant pointer to non-constant variable: can change variable value via dereferencing, cannot change pointer value
	int *const cVPointer = &value;

	//constant pointer to constant variable: cannot change variable value via dereferencing, cannot change pointer value
	const int *const cVcPointer = &value;

	//dynamically allocated memory. must be deleted after use so as to not be left dangling.
	int *ptr = new int;
	delete ptr;
	ptr = nullptr;

}