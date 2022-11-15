//============================================================================
// Name        : Copy.cpp
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
	Animal(){cout << "Animal created " << endl;}
	Animal(const Animal& other): name(other.name) {
//		name = other.name;
		other.speak();
		cout << "Animal created by copying " << endl;
	}
	void setName(string name) {this->name = name;}
	void speak() const {cout << "My name is " << name << endl;}
};

int main() {

	Animal animal1;
	animal1.setName("freddy");

	Animal animal2 = animal1;
	animal1.speak();
	animal2.speak();

	cout << "==================" << endl;

	animal2.setName("bob");
	animal1.speak();
	animal2.speak();

	cout << "==================" << endl;

	Animal animal3(animal1);

	return 0;
}
