//============================================================================
// Name        : Char.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text1[] = {'h','e','l','l','o'};
	cout << text1 << endl;

	cout << "====================" << endl;

	char text2[] = "hello";
	cout << text2 << endl;

	for(int i = 0; i < sizeof(text2); i++){
		cout << i << ": " << text2[i] << endl;
		cout << endl;
		cout << i << ": " << (int)text2[i] << endl;
	}

	cout << "====================" << endl;

	int k = 0;

	while(true){
		if(text2[k] == 0) break;
		cout << text2[k] << flush;
		k++;
	}

	return 0;
}
