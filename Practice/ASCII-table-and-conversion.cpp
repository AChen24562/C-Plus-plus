#include <iostream>
using namespace std;

int main(){

  // ASCII decimal value
  char letter;

  cout << "Enter a lowercase character: ";
  cin >> letter;
  cout << "You entered " << letter << endl;

  int ascii = letter;

  cout << "The letter \"" << letter << "\" has an ASCII decimal value of: "
    << ascii << endl;

  // Changing an uppercase to lower case
  char c;
  int i;

  cout << "Please enter one uppercase letter: ";
  cin >> c;
  cout << "You entered: " << c << endl;
  cout << "The lowercase of this letter is: " << (c+=32) << endl;

  return 0;
}
