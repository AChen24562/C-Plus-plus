#include <iostream>
using namespace std;

int gcd(int num1, int num2){
  if(num2 ==0){
      return num1;
    }
      return gcd(num2, num1%num2);
}


int main(){
  int num1, num2;
  cout << "Enter 2 numbers: ";
  cin >> num1 >> num2;

  int answer = gcd(num1, num2);

  cout << endl << "The Greatest Common Divisor of: "
       << num1 << " and " << num2 << " is " << answer;



  return 0;
}
