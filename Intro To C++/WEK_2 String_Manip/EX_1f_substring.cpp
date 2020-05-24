// (c) 2018 S. Trowbridge
// Ex 1f - substring

#include <iostream>
#include <string>
using namespace std;

int main( ) {
    string s1 = "This is a string.";
    cout << "Test String:\n" << s1 << endl << endl;

    // Use the substr function to extract part of the original string
    // and store the result into a string variable named s2.
    string s2 = s1.substr(5, 4);

    // Output the substring of the original string.
    cout << "Sentence Substring:\n" << s2 << endl;

    return 0;
}
