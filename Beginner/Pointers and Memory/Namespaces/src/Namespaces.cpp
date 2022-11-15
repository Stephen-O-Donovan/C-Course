//============================================================================
// Name        : Namespaces.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;

int main() {

	ncats::Cat cat;
	cat.speak();

	sod::Cat cat2;
	cat2.speak();

	cout << sod::CATNAME << endl;
	cout << ncats::CATNAME << endl;
	return 0;
}
