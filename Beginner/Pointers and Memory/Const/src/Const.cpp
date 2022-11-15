//============================================================================
// Name        : Const.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) {this->name = name;}
	void speak() const {cout << "My name is " << name << endl;}
};

int main() {

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;
	int *pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	pValue = &number; //Error with this: int const *pValue = &value;
	cout << *pValue << endl;
	cout << number << endl;

//	*pValue = 20; //Error with this: const int *pValue = &value;
	cout << *pValue << endl;
	cout << number << endl;



	return 0;
}
