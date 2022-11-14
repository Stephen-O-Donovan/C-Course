//============================================================================
// Name        : Getters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;
	cout << person.toString() << endl;

	person.setName("Phil");
	cout << person.toString() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;


	return 0;
}
