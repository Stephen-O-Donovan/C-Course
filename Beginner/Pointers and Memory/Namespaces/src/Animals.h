/*
 * Animals.h
 *
 *  Created on: 15 Nov 2022
 *      Author: Homs
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>
using namespace std;

namespace sod {

const string CATNAME = "George";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace sod */

#endif /* ANIMALS_H_ */
