//============================================================================
// Name        : Arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]){

	cout << sizeof(texts)<< endl; //returns size of pointer

	for(int i = 0; i < nElements; i++){
		cout << texts[i] << endl;
	}
}

void show2(const int nElements, string *texts){

	cout << sizeof(texts)<< endl; //returns size of pointer

	for(int i = 0; i < nElements; i++){
		cout << texts[i] << endl;
	}
}

void show3(string (&texts)[3]){

	cout << sizeof(texts)<< endl; //returns size of pointer

	for(int i = 0; i < sizeof(texts)/sizeof(string); i++){
		cout << texts[i] << endl;
	}
}

string *getArray(){
	//Don't return pointers to local variables
	string nums[] = {"one", "two", "three"};

	return nums;
}

string *getMemory(){
	string *pMem = new string[5];
	return pMem;
}

void freeMemory(string *pMem) {
	delete [] pMem;
}

int main() {

	string texts[] = {"Apple", "Orange", "Banana"};
	cout << sizeof(texts)<< endl;
	show1(3, texts);
	cout << endl;
	show2(3, texts);
	cout << endl;
	show3(texts);
	cout << "getArray" << endl;
	cout << getArray() << endl;
	cout << "getMemory" << endl;
	string *pMemory = getMemory();
	cout << *pMemory << endl;
	freeMemory(pMemory);
	return 0;
}
