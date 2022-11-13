//============================================================================
// Name        : Loops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

//	int i = 0;
//
//	while(i <= 5){
//		cout << i << ". Hello" << endl;
//		i++;
//
//	}
//
//	int value = 7;
//
//	do{
//		cout << "7 out" << endl;
//	} while (value < 5);
//
//	const string password = "hello";
//	string input;


//	if(input == password) {
//		cout << "Password accepted" << endl;
//	}else{
//		cout << "Access denied" << endl;
//	}

//	do {
//		cout << "Enter password> " << flush;
//		cin >> input;
//		if(input != password){
//			cout << "Access denied" << endl;
//		}
//	}while(input != password);
//
//	cout << "Password accepted" << endl;

	for(int i = 0; i < 5; i++){

		if(i == 2){
			cout << "Skipping iteration " << i << endl;
			continue;
		}
		if(i == 4) {
			cout << "breaking loop at " << i << endl;
			break;
		}
		cout << i << ". Hello" << endl;
		cout << "continuing loop" << endl;
	}

		const string password = "hello";
		string input;

		do {
			cout << "Enter password> " << flush;
			cin >> input;
			if(input != password){
				cout << "Access denied" << endl;
			} else{
				break;
			}
		}while(true);

		cout << "Password accepted" << endl;

	cout << "end" << endl;

	return 0;
}
