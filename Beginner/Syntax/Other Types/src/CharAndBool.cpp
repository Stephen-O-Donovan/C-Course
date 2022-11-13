//============================================================================
// Name        : CharAndBool.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	bool bValue2 = false;

	cout << bValue << endl;
	cout << bValue2 << endl;

	char cValue = 55;
	cout << cValue << endl;

	char cValue1 = '7';
	cout << cValue1 << endl;
	cout << (int) cValue1 << endl;

	char cValue2 = 'g';
	cout << cValue2 << endl;

	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << (char) wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
