//============================================================================
// Name        : Allocating.cpp
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
	Animal() {
		cout << "Animal created" << endl;
	}
	Animal(const Animal &other) :
			name(other.name) {
		cout << "Animal created by copying" << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is " << name << endl;
	}

};

int main() {


	int *pInt = new int;
	*pInt = 8;
	cout << *pInt << endl;
	cout << pInt << endl;
	delete pInt;


	Animal *pAnimal = new Animal[10];
	pAnimal[5].setName("George");
	pAnimal[5].speak();
	delete [] pAnimal;

	cout << "======================" << endl;

	char *pMem = new char[5];
	delete [] pMem;

	cout << "======================" << endl;

	char c = 'a';
	c++;
	string name(5, c);
	cout << name << endl;

	return 0;
}
