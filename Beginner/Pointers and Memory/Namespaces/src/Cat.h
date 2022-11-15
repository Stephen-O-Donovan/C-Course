/*
 * Cat.h
 *
 *  Created on: 15 Nov 2022
 *      Author: Homs
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace ncats {

const string CATNAME = "Freddy";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

}

#endif /* CAT_H_ */
