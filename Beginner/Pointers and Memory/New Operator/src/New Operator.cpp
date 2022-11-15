//============================================================================
// Name        : New.cpp
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

Animal createAnimal(){
	Animal a;
	a.setName("Bertie");
	return a;
}

Animal& createAnimalRef(){
	Animal a;
	a.setName("Bill");
	return a;
}

Animal *createAnimalPoint(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Sue");
	return pAnimal;
}


int main() {

//	Animal cat;
//	cat.setName("Freddy");
//	cat.speak();
//
//	cout << "===================" << endl;
//
//	Animal *pCat1 = new Animal();
//	(*pCat1).setName("Bob");
//	(*pCat1).speak();
//	delete pCat1;
//
//	cout << "===================" << endl;
//
//	Animal *pCat2 = new Animal();
//	pCat2->setName("Jim");
//	pCat2->speak();
//	cout << sizeof(pCat2) << endl;
//	delete pCat2;
//
//	cout << "===================" << endl;

	Animal frog = createAnimal();
	frog.speak();

	Animal &pig = createAnimalRef();
	pig.speak();

	Animal *dog = createAnimalPoint();
	dog->speak();
	delete dog;


	return 0;
}
