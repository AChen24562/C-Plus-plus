#include <iostream>
using namespace std;

void printDigits(int num){
  if(num <10){
    cout << num << " ";
  }

  else
  {
    printDigits(num/10);
    cout << num%10 << " ";
  }

}

void printDigitsReverse(int num){
  if(num <10){
    cout << num << " ";
  }

  else
  {

    cout << num%10 << " ";
    printDigitsReverse(num/10);
  }
}

int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;

printDigits(num);
cout << endl;
 printDigitsReverse(num);

  return 0;
}
