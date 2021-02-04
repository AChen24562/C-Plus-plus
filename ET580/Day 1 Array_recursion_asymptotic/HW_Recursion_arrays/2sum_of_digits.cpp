#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
// Steps
// Base: when input < 10 complete and return + input
/* Recursive Act: store the last digit and call another instance of
the same function but with the input /10, once complete retun the
sum of each previous return
*/

//Trace
/*
sumdigits(345)  Store 5
  sumdigits(34) Store 4
    sumdigits(3)
    sumdigits(3) + 4 return 7
  sumdigits(7) + 5 return 12


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
