//============================================================================
// Name        : Reversing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";
	char *pStart = text;
	int nChars = sizeof(text)-1;
	char *pEnd = text + nChars - 1;
	cout << *pEnd<< endl;

	while(pStart < pEnd){
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;
		pStart++;
		pEnd--;

	}

	cout << text << endl;
	return 0;
}
