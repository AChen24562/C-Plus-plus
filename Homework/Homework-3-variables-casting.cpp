/* Homework 3
    Alex Chen
    Prof. Sun */

#include <iostream>
#include <cmath>
using namespace std;


int main(){
// circumference + Area of circle
  float pi = 3.1416;
  float radius;

  cout << "What is the radius of the circle?: ";
  cin >> radius;
  int power = pow(radius,2);
  float area = (pi * power);
  cout << "The circles area is " << area << endl;

  float circumference = 2 * pi * radius;
  cout << "The circumference is: " << circumference << endl;

// ASCII table value
  char c;
  cout << "Enter an upper or lowercase letter: ";
  cin >> c;
  int val = c ;
  cout << "The ASCII table decimal value of letter "
    << "\"" << c << "\""<< " is " << val;






  return 0;
}
