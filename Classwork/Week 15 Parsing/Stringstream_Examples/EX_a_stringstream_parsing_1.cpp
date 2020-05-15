// (c) S. Trowbridge & J. Sun
// EX a - stringstream parsing 1

#include <iostream>
#include <string>
#include <sstream>        // Included for stringstream.
using namespace std;

int main() {
  // Text string for analysis.
  string text = "abcfafsdfgaddf|wefsdfadf|123345345|fafa";

  // Create and associate a stringstrem object with a text string for analysis.
  istringstream parser(text);

  // Variable used to temporarily store each token (data element)
  // once it has been isolated from the input text string.
  string token;
  int i=0;

  // Separate a string using a | delimiter.
  // While loop repeats until getline indicates the textstring has ended.
  //
  // Version of getline which has the following input parameters:
  // stringstream object - this contains the text string to be analyzed
  // token string - the currently isolated data token (individual element)
  // delimiter - the symbol used to break up the text string into individual tokens
  //
  // Output each token on one line at a time.
  while(getline(parser, token, '|')) {
     cout << token << endl;
     i++;
  }
  cout << "\nThere are " << i << " tokens."<< endl;
  cout << endl << endl;

  return 0;
}
