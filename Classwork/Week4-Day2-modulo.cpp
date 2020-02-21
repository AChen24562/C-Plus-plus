#include <iostream>
using namespace std;

int main(){
  float oneA = (9 % 3);
  cout << "9 divided by 3 is " << oneA << endl;

  float oneC = (44 % 7);
  cout << "44 divided by 7 has a remainder of: " << oneC << endl;
// displays 0 - 2: 0, 1, 2, 3
  float twoA = (1 % 3);
  cout << "1 modulo 3 has an answer of: " << twoA << endl;

  float twoB = (2 % 3);
  cout << "2 modulo 3 has an answer of: " << twoB << endl;

  float twoC = (3 % 3);
  cout << "3 modulo 3 has an answer of: " << twoC << endl;
// When modulou by any number it will display that many results
// EX: x % 5 will give 0-4: 0, 1, 2, 3, 4
  int value;

  cout << "Enter a value: ";
  cin >> value;

  cout << "This will always output a value that is between 0 and 10: ";
  cout << value % 11 << endl;

// Week 4 PE #5
  int value2;
  cout << "Enter another value: ";
  cin >> value2;
  cout << "Outputting a number between 30 - 34 ";
  cout << value2 % 5 + 30 << endl;

  return 0;
}
