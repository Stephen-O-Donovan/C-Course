//============================================================================
// Name        : Input.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	cout << "Enter name: " << flush; // prints Input
//	string input;
//
//	cin >> input;
//	cout << "Hello " << input << endl;

	cout << "Enter 2 numbers:" << flush;
	int num1;
	int num2;

	cin >> num1;
	cin >> num2;
	cout << "You entered the numbers " << num1 << " and " << num2 << endl;
	cout << "Their sum is: " << num1+num2 << endl;

	return 0;
}
