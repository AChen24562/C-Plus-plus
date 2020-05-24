// (c) 2018 S. Trowbridge
// Ex 1g - string functions

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    string name = "John Smith";
    cout << "Original name: " << name << endl << endl;

    // Insert a middle name.
    name.insert(5, "Jay ");
    cout << "Inserted middle name: " << name << endl << endl;

    // Append the "Jr." suffix to the string.
    name.append(" Jr.");
    cout << "Appended suffix: " << name << endl << endl;

    // Replace the middle name.
    name.replace(5, 3, "Joseph");
    cout << "Replaced middle name: " << name << endl << endl;

    // Remove the middle name.
    name.erase(5, 7);
    cout << "Removed middle name: " << name << endl << endl;

    // Find the location of the first occurence of the string "oh".
    cout << "Location of the string \"oh\": " << name.find("hn") << endl;

    return 0;
}
