// (c) S. Trowbridge
// Ex 1.5 - simple string variables

#include <iostream>
#include <string>       // include the string library of functions
using namespace std;

int main()
{
    cout << "-----------------------------------------------" << endl;

    // string variables
    string today = "Thurs";
    string tomorrow = "Fri";

    cout << "Today is " << today << "." << endl;

    cout << endl;

    cout << "Tomorrow is " << tomorrow << "." << endl ;

    cout << endl << "-----------------------------------------------" << endl << endl;

    // character variables
    char someLetter = 'a';
    char someNumber = '0';
    char somePunctuation = ';';

    cout << "The character '" << someLetter << "' is a letter." << endl << endl;

    cout << "The character '" << someNumber << "' is a number." << endl << endl;

    cout << "The character '" << somePunctuation << "' is a form of punctuation." << endl << endl;

    cout << "-----------------------------------------------" << endl << endl;

    return 0;
}
