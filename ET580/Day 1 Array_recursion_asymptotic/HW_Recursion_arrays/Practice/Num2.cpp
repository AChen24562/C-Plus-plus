#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

// Logarithmic function

// sum_digits(123) return 3 + sum_digits(12)
  // sum_digits(12) return 2 +sum_digits(1)
    // sum_digits(1) return 1:  3 + 2 + 1
  // sum_digits(12)
// sum_digits(123)
int sum_digit(int num){
  if(num < 10){
    return num;
  }
  else{
    int digit = num%10;
    return digit + sum_digit(num/10);
  }
}

int main(){

  int num = 444;
  cout << sum_digit(num);

  return 0;
}
