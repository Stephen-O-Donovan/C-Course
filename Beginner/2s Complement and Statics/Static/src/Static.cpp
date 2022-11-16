//============================================================================
// Name        : Static.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
public:
	//Initialisation of const must be done right here
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test() {
		id = ++count;
	}

	int getId(){
		return id;
	}

	static void showInfo(){
		cout << "Current status of count: " << count << endl;
	}
};

// .cpp source
int Test::count = 0;

int main() {

//	cout << Test::count << endl;

	Test::showInfo();

	Test test1;
	cout << "Object 1 id: " << test1.getId() << endl;

	cout << "=======================" << endl;

	Test::showInfo();
	Test test2;
	cout << "Object 2 id: " <<  test2.getId() << endl;

	cout << "=======================" << endl;

	cout << Test::MAX << endl;

	cout << "=======================" << endl;


	return 0;
}
