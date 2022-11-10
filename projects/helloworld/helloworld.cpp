#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg(5);
    msg[2] = "bye";

    cout << msg[2] << endl;
}