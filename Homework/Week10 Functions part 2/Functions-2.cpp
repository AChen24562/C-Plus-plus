#include <iostream>
#include <cmath>
using namespace std;

double sqrtRounded(double num){

  double result = sqrt(num);
  int rounded = round(result);
  return rounded;
}

int main(){
  double num;
  do{
    cout << "Enter a positive number <Or Enter a ZERO to exit>: ";
    cin >> num;
  if(num >-1){
    if(num == 0){
        cout << num << " is entered. Exiting Program." << endl
             << "---------------------------------";
        exit(0);
    }
    int rounded = sqrtRounded(num);
    cout << "The square root of " << num << " rounded to the nearest integer is "
         << rounded << endl << endl;

  }
    else
        cout << num << " is an invalid input. Please re-enter. "<< endl << endl;

  }while(true);



  return 0;
}
