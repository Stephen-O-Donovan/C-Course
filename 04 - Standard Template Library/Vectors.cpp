#include <iostream>
#include <string>
#include <vector> //a resizable array
using namespace std;


int main(){

    // //vector is a template class
    vector<string> strings;
    // // don't need to set size but can

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    cout << strings[2] << endl;

    cout << "Size : " << strings.size() << endl;

    cout << "Using for loop: " << endl;

    for(int i =0; i < strings.size(); i++){
        cout << strings[i] << endl;
    }

    cout << "Using iterator: " << endl;

    vector<string>:: iterator it = strings.begin();

    cout << *it << endl;

    it++;

    cout << *it << endl;

    cout << "Using iterator and for loop: " << endl;

    for(vector<string>:: iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }

    cout << "Pointing to specific string with it: " << endl;

    it = strings.begin(); 
    it+=2;
    cout << *it << endl;




    return 0;
}