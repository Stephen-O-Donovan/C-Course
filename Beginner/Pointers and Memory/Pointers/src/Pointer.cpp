//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pdValue, double dValue){
	cout <<"2. pdValue: " << *pdValue << " - dValue: " << dValue << endl;
	*pdValue = 10.0;
	dValue = 4.555;
	cout <<"3. pdValue: " << *pdValue << " - dValue: " << dValue << endl;
}

int main() {
	int nValue = 8;

	int *pnValue = &nValue;

	cout <<"Int value: " << nValue << endl;
	cout <<"Pointer to int address: " << pnValue << endl;
	cout <<"Int value via pointer: " << *pnValue << endl;

	cout << "===================================" << endl;

	double pdValue = 123.4, dValue = 31.5;
	cout <<"1. pdValue " << pdValue << " - dValue: " << dValue << endl;
	manipulate(&pdValue, dValue);
	cout <<"4. pdValue: " <<  pdValue << " - dValue: " << dValue << endl;



	return 0;
}
