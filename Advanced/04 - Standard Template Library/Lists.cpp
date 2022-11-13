#include <iostream>
#include <string>
#include <list> //can insert anywhere in a list unlike only ends with vector
using namespace std;

int main(){

    list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    list<int>::iterator it = numbers.begin(); 
    cout << "Element: " << *it << endl;
    it++;
    cout << "Element: " << *it << endl;
    numbers.insert(it, 100);

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    list<int>::iterator eraseit = numbers.begin();
    eraseit++;
    cout << "Element: " << *eraseit << endl;
    eraseit = numbers.erase(eraseit);
    cout << "Element: " << *eraseit << endl;

    for(list<int>::iterator it = numbers.begin(); it != numbers.end();){
        if(*it == 2){
            numbers.insert(it, 1234);
        }

        if(*it == 1){
            it = numbers.erase(it);
        } 
        else{
            it++;
        }
    }

    for(list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }
 

    return 0;
}