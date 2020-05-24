#include <iostream>
using namespace std;

int main(){

//int x = 2, y = 3;

// Assign x to y then x -- or x = x - 1
// y = 2
// x = 1

/*y = x-- ;
cout << x << endl;
cout << y;*/

int a, b;
cout << "Enter a number (numerator): " << endl;
cin >> a;

cout << "Enter a number (denominator): ";
cin >> b;

if (b == 0){
  cout << "Invalid input. Input 0. \n Exiting... " << endl;
  return 0;
}
else{
    if (a%b==0)
      cout << a << " is evenly divisible by " << b << "." << endl;
    else
      cout << a << " is not evenly divisible by " << b << "." << endl;
}



  return 0;
}
