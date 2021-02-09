#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

// Logarithmic function
// BEGINNING TO THINK ITS LINEAR

// Steps:
// Base CASE: when input < 10 complete and return + input
/* Recursive Act: store the last digit and call another instance of
the same function but with the input /10, once complete retun the
sum of each previous return
*/

//Trace
/*
// sum_digits(123)
  // sum_digits(12)
    // sum_digits(1) return 3
  // sum_digits(12) return 3 + 2
// sum_digits(123) return 3 + 2 + 1
*/
int sumdigits(int num){
  if(num < 10){
    return num;
  }
  int digit = num % 10;
  cout << digit<< endl;
  return digit + sumdigits(num/ 10);
}


int main(){

cout << sumdigits(123);



  return 0;

}
