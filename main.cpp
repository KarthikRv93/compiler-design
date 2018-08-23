#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    string myName;
    /*cout << "please enter your age: ";
    cin >> i;
    cout << "the age that you have entered is " << i;*/

    cout << "Please enter your name :";
    getline(cin,myName);
    cout << "The name that you have entered is : "<< myName;
}


