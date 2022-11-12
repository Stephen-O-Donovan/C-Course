//============================================================================
// Name        : ComplexNumbers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Complex.h"
using namespace std;
using namespace complextut;

int main() {
	Complex c1(2,3);

	Complex c2 = c1;

	Complex c3 = c2;

	cout << c1 << endl;
	cout << c2 << ": " << c3 << endl;
	cout << "Complex Numbers finish" << endl; // prints Complex Numbers
	return 0;
}
