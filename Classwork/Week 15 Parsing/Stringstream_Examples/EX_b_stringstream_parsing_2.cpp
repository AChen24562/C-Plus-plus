// (c) S. Trowbridge & J. Sun
// Ex b stringstream parsing 2

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string text = "5,5,6,4,7,3,";
    istringstream parser(text);
    string token;
    int sum = 0;
    int  number;
  // Separate the string using a comma deliimiter.
  while(getline(parser, token, ',')) {

    // Output the data token as a string.
    cout << "String: " << token << endl;

    // Convert string token into an integer, then store as an integer.
    // 1. Create a new stringstream object and associate it with the data token.
    // 2. Convert the token associated with the new stringstream object into
    //    the the type of the specified variable, store in the new variable.
    //    New variable of type int.

    istringstream converter(token);  // Associate a new stringstream object with token.
    converter >> number;            // Convert token into specified variable type (int) and store.

    // Output the data as an integer.
    cout << "Int: " << number << endl << endl;
    sum+=number;
  }
  cout << endl << "sum = " << sum;
  return 0;
}
