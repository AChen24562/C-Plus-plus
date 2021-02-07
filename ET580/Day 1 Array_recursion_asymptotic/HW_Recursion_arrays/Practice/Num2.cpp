#include <iostream>

using namespace std;

// Linearor Logarithmic Time Function
/*
sum_digits(123)
  sum_digits(12)
    sum_digits(1)return 1
  sum_digits(12) return 1 + 2
sumdigits(123) return 1 + 2 + 3

*/

int sum_digits(int num){
  if(num < 10){
    return num;
  }
  else{
    int digit = num %10;
    return digit + sum_digits(num/10);
  }
}

int main(){
  int num = 123;
  cout << sum_digits(num);



  return 0;


}
