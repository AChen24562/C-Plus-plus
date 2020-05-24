#include <iostream>
using namespace std;

int sumDigits(int n);


int main(){
  int num;

  cout << "Enter a number: ";
  cin >> num;

  cout << sumDigits(num);


  return 0;
}


int sumDigits(int num){

  if(num != 0)
    return num + sumDigits(num -1);
  return 0;

}
