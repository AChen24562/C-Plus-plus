#include <iostream>
using namespace std;
// Print Foward
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

// Print Backwards
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

// Main Functions
int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;

printDigits(num);
cout << endl;
 printDigitsReverse(num);

  return 0;
}
