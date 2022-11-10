#include <iostream>
#include <string>
#include <vector> 
using namespace std;


int main() {


    vector<double> numbers(20);

    cout << "Size: " << numbers.size() << endl;

    int capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;

    for(int i = 0; i < 10000; i++){
        if(numbers.capacity() != capacity){
            capacity = numbers.capacity();
            cout << "Capacity: " << capacity << endl;
            
        }
        numbers.push_back(i);

    }

    cout << "Size: " << numbers.size() << endl;
    numbers.resize(100);
    cout << "Size: " << numbers.size() << endl;

    numbers.clear();
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    return 0;
}