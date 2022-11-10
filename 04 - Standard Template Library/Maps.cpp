#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    cout << ages["Raj"] << endl;

    ages["Raj"] = 70;

    pair<string, int> addToMap("Peter", 100);
    ages.insert(addToMap);

    ages.insert(pair<string, int>("Julie", 10));

    ages.insert(make_pair("Amy", 40));

    for(map<string, int>:: iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    cout << ages["Sue"] << endl; //adds it, maybe unwanted

    for(map<string, int>:: iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << ": " << it->second << endl;
    }

    if(ages.find("Dan") != ages.end()) {
        cout << "Found Dan" << endl;
    }else{
        cout << "Key not found" << endl;
    }

    for(map<string, int>:: iterator it = ages.begin(); it != ages.end(); it++){
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }



    return 0;
}