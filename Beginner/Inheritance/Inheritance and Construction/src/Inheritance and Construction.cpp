//============================================================================
// Name        : Inheritance.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
private:
	int id;

public:
	Machine(): id(0) { cout << "Machine no-arg constructor called" << endl; }
	Machine(int id): id(id) { cout << "Machine 1-arg constructor called" << endl; }
	void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine {
public:
	Vehicle(){ cout << "Vehicle no-arg constructor called" << endl; }
	Vehicle(int id): Machine(id) { cout << "Vehicle 1-arg constructor called" << endl; }

};

class Car: public Vehicle {
public:
	Car(): Vehicle(999){ cout << "Car no-arg constructor called" << endl; }

};

int main() {

	Vehicle vehicle;
	vehicle.info();

	cout << "=================" << endl;

	Car car;
	car.info();

	cout << "=================" << endl;

	Machine machine(123);
	machine.info();

	cout << "=================" << endl;

	Vehicle vehicle1(456);
	vehicle1.info();

	cout << "=================" << endl;

	Car car1;
	car1.info();

	cout << "=================" << endl;

	return 0;
}
