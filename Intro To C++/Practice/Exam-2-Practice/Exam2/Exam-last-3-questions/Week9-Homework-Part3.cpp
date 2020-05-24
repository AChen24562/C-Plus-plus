// Alex Chen
// Prof. Sun
// Homework 9 (Exam Question 3)
#include <iostream>
using namespace std;

int main(){
  double number;
  int sum =0;
  int digit;


  // seperate digits
do{
  cout << "Enter a number between 1 and 1,000 (Inclusive): ";
  cin >> number;

// Check if number is an integer
  if(number ==(int)number){
    // Check if number is within range
    if(number >= 1 && number <= 1000){
      break;
    }
    else{
      cout << "Invalid input (Numbers MUST be between 1 and 1,000). Please re-enter."
           <<endl << endl;
    }
  }
  else{
    cout << "Invalid input (INTEGER value is required). Please re-enter." <<endl << endl;
  }



}while(true);

  int n;
  n = static_cast<int>(number);
    // seperate digits
  while(n>0){
  digit = n % 10;
  n = n/10;
  sum += digit;
  }
  cout<<endl << "The sum of each digit is: " << sum;
  cout << endl;


  return 0;
}
