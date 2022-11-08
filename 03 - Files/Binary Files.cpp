#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)

struct Person {

    char name[50];
    int age;
    double height;

};

#pragma pack(pop)

int main(){

    Person someone = {"Frodo", 50, 0.80};

    string fileName = "test.bin";

    //// Write binary file ///////////////////

    ofstream outputFile;

    outputFile.open(fileName, ios::binary);

    if(outputFile.is_open()){

        //outputFile.write((char *)&someone, sizeof(Person));
        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();

    } else {
        cout << "Could not create file " + fileName;
    }

    //// Write binary file ///////////////////

    Person someoneElse = {};


    ifstream inputFile;

    inputFile.open(fileName, ios::binary);

    if(inputFile.is_open()){

        //inputFile.write((char *)&someone, sizeof(Person));
        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

        cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

        inputFile.close();

    } else {
        cout << "Could not read file " + fileName;
    }

    return 0;
}