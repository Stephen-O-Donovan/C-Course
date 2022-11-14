/*
 * Person.cpp
 *
 *  Created on: 14 Nov 2022
 *      Author: Homs
 */

#include "Person.h"
#include <sstream>


string Person::toString(){
	stringstream ss;;

	ss << "Name: ";
	ss << name;
	ss << " - Age: ";
	ss << age;

	return ss.str();
}

