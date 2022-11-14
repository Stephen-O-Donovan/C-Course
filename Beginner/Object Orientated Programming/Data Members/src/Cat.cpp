/*
 * Cat.cpp
 *
 *  Created on: 14 Nov 2022
 *      Author: Homs
 */
#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
	if(happy){
		cout << "Meow" << endl;

	} else{
		cout << "Hsss" << endl;

	}
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}
