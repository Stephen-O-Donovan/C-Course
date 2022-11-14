/*
 * Cat.cpp
 *
 *  Created on: 14 Nov 2022
 *      Author: Homs
 */
#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat(){
	cout << "Cat destroyed" << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meow" << endl;
	}else{
		cout << "Hss" << endl;
	}
}

