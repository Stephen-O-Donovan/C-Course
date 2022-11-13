//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

//	cout << "Integer Arrays" << endl; // prints Arrays
//
//	int values[3];
//
//	values[0] = 23;
//	cout << values[0] << endl;
//	cout << values[1] << endl;
//	cout << values[2] << endl;
//
//	cout << "Double Arrays" << endl; // prints Arrays
//
//	double numbers[4] = {4.5, 2.3, 7.2, 8.1};
//	cout << numbers[0] << endl;
//
//	for(int i = 0; i < 4; i++){
//		cout << "Element at index " << i << " : " <<  numbers[i] << endl;
//	}
//
//	int numberArray[8] = {};
//	cout << sizeof(numberArray) << endl;
//	cout << sizeof(int) << endl;
//	int arrSize = sizeof(numberArray)/sizeof(int);
//
//	for(int i = 0; i < arrSize; i++){
//		cout << "Element at index " << i << " : " <<  numberArray[i] << endl;
//	}
//
//	string texts[] = {"apple", "banana", "orange"};
//	for(int i = 0; i < 3; i++){
//		cout << "Element at index " << i << " : " <<  texts[i] << endl;
//	}

	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};

	cout << sizeof(animals) << endl;
	cout << sizeof(animals[0]) << endl;

	for(unsigned int i = 0; i < sizeof(animals)/sizeof(animals)[0]; i++){
		for(unsigned int j = 0; j < sizeof(animals[0])/sizeof(string); j++){
			cout << animals[i][j] << " " << flush;
		}

		cout << endl;
	}

	cout << "End Arrays" << endl; // prints Arrays
	return 0;
}
