// Alex Chen
// Prof. J Sun
// Homework 5 Branching


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
 // Determining if a number is the factor of the other 2 numbers
if (a % c == 0 && b % c == 0)
    cout << c << " is a common factor of " << a
         << " and " << b << endl;
         else
          cout << c << " is NOT a common factor of " << a
          << " and " << b << endl;

// Determining a character is lower, upper, punctuation, or number
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
