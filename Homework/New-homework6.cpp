// Alex Chen
// Prof. Sun
// Homework 6

#include <iostream>
using namespace std;

int main(){
  int minVal;
  int maxVal;

  do{

    cout << endl <<"Display a Range" << endl
         << "-----------------------------------" << endl;
    cout << "Enter a minimum integer between 1 and 100 (exclusive): ";
    cin >> minVal;
    cout << "Enter a Maximum integer between 1 and 100 (exclusive): ";
    cin >> maxVal;

    if(minVal > 1 && maxVal >= 0 && maxVal != 100){
      if (minVal < maxVal && minVal != maxVal){
        break;
        }
       else
          cout << "Max and Min Values are invalid" << endl;
    }else
        cout << endl << "Number must be a positive value and not equal to 1 & 100" << endl;

      // New




}while(true);

for(int i = (maxVal - 1); i > minVal; i--){
  cout << i << endl;
  }







  return 0;
}
