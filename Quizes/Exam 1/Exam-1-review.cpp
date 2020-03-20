#include <iostream>
using namespace std;

 int main(){
  // Decrement by 1
  int n = 5;
  cout << n-- << endl << n << endl;
  cout << --n << endl;
  cout << (n-=1) << endl << endl;

//ASCII table
char z = 'z';
cout << int(z) << endl;

// #7 'n' is less than 28 and is not a multiple of 7
int num;
cout << "Enter a number: ";
cin >> num;
if(num < 28 && (num % 7 == 0))
    cout << "Pass" << endl;
else
    cout << "Fail" << endl;

// #10 what is the value of 'x'

int x = 15;
cout << ((x >= 15) || !(x<=15)) << endl;

// # 8 printing a number between 7 and 11
int number;
cout << "Enter another number: ";
cin >> number;
cout << number % 2 + 7 << endl;



  return 0;
}
