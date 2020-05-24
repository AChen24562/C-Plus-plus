// Alex Chen
// Prof. Sun
// Homework 9 (Exam Question 1)
#include <iostream>
using namespace std;

int main(){
  int n;

  cout << "Enter a value for n: ";
  cin >> n;
  cout << endl << endl;

  for(int i = n; i > 0; i--){
    cout << n << " * " << i << " = " << n*i;
    cout << endl;
  }


return 0;
}
