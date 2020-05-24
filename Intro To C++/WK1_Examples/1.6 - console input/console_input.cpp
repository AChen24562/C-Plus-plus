// (c) S. Trowbridge
// Ex 1.6 - console input

#include <iostream>
#include <string>       // include the string library of functions
using namespace std;

int main()
{
    string lastname;    // declare a string variable named lastname
    string age;         // declare a string variable named age

    cout << "What is your last name? ";
    cin >> lastname;    // store the input into the a variable named lastname
    //getline(cin, lastname);
    cout << endl;
    cout << "What is your age?" << endl;
    cin >> age;         // store the input into a variable named age

    cout << endl;
    cout << "Your last name is "
         << lastname
         << " and your age is "
         << age
         << "."
         << endl;

    return 0;
}
