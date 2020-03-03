#include <iostream>
using namespace std;

int main(){
int a, b, c;
cout << "Enter a integer: ";
cin >> a;
cout << "Enter a second integer: ";
cin >> b;
cout << "Enter a possible factor of those two integers: ";
cin >> c;

if (a % c == 0 && b % c == 0)
    cout << c << " is a common factor of " << a
         << " and " << b << endl;
else if(a % c != 0 && b % c != 0)
    cout << c << " is NOT a common factor of " << a
        << " and " << b << endl;
else if (c == 0)
    cout << "Error";

// Determining a character is lower or upper
char letter;
cout << "Enter a character: ";
cin >> letter;

int val = letter;

if (val >= 65 && val <= 90)
  cout << letter << " is a uppercase letter." << endl;
else if(val >= 97 && val <= 122)
  cout << letter << " is a lowercase letter." << endl;
else if(val >= 48 && val <= 57)
  cout << letter << " is a number." << endl;
else if(val >= 33 && val <= 47)
  cout << letter << " is a punctuation." << endl;
else
  cout << letter << " is not within the parameters of the program." << endl;








  return 0;
}
