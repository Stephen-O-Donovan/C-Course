//============================================================================
// Name        : FloatingPointTypes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float fValue = 123.456789;

	cout << fixed << fValue << endl;
	cout << scientific << fValue << endl;

	cout << sizeof(float) << "Float size : " << sizeof(fValue) << endl;

	cout << setprecision(20) << fValue << endl;

	double dValue = 123.456789;

	cout << setprecision(20)  << dValue << endl;

	cout << "Double size : " << sizeof(dValue) << endl;

	long double lValue = 123.4567899876543210;

	cout << setprecision(20)  << lValue << endl;

	cout << "Long Double size : " << sizeof(lValue) << endl;


	return 0;
}
