// Alex Chen
//Prof. Sun
//Loop Quiz

#include <iostream>
using namespace std;

int main(){

int num;
int exp;
int answer = 1;

cout << "Enter an integer, number: ";
cin >> num;
cout << "Enter an integer, exponent: ";
cin >> exp;

for(int i = 1; i <= exp; i++){
answer = answer * num;
  }


cout << num << " to the power of " << exp << " is: " << answer << endl;

  return 0;
}
