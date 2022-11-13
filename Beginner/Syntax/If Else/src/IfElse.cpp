//============================================================================
// Name        : IfElse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//	string password = "Hello";
//	cout << "Please enter password> " << flush;
//
//	string input;
//	cin >> input;
//
//	cout << "'" << input << "'" << endl;
//
//	if(input == password) {
//		cout << "Password accepted" << endl;
//	}
//
//	cout << "1.\tAdd new record." << endl;
//	cout << "2.\tDelete record." << endl;
//	cout << "3.\tView record." << endl;
//	cout << "4.\tSearch record." << endl;
//	cout << "5.\tQuit." << endl;
//
//	cout << "Enter selection > " << flush;
//
//	int value;
//	cin >> value;

//	if(value < 3) {
//		cout << "Insufficient privileges" << endl;
//	} else {
//		cout << "Access granted." << endl;
//	}
//
//	if(value == 5){
//		cout << "Quitting" << endl;
//	}else {
//		cout << "Remaining" << endl;
//	}
//
//	if(value == 1){
//		cout << "Adding record..." << endl;
//	}else if(value ==2) {
//		cout << "Deleting record..." << endl;
//	}else if(value ==3) {
//		cout << "Viewing record..." << endl;
//	}else if(value ==4) {
//		cout << "Searching record..." << endl;
//	}else if(value ==5) {
//		cout << "Quitting..." << endl;
//	}else{
//		cout << "Invalid option" << endl;
//	}

	//Comparing floats

//	float value1 = 1.1;
//	if(value1 == 1.1){
//		cout << "Equal" << endl;
//	} else {
//		cout << "Not equal" << endl;
//	}
//
//	cout << setprecision(10) << value1 << endl;

	//Switches

	const int value = 6;
	switch(value){
	case 4:
		cout << "value is 4 " << endl;
		break;
	case 5:
		cout << "value is 5 " << endl;
		break;
	case 6:
		cout << "value is 6 " << endl;
		break;
	default:
		cout << "no recognised value " << endl;
	}


	return 0;
}
