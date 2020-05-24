#include <iostream>
using namespace std;
  void numInput(int& num1, int& num2){
    cout << "Enter a number for \"x\": ";
    cin >> num1;
    cout << "Enter a number for \"y\": ";
    cin >> num2;
  }

  int change(int& x, int& y){
    int temp = y;
    y = x;
    x = temp;

    return x , y;
  }

int main(){
  int x, y;
    numInput(x, y);


  cout << endl;
  cout << "X is: "<< x << endl << "Y is: " << y;
  cout << endl << endl;

  change(x, y);

  cout << "X is: "<< x << endl << "Y is: " << y;
return 0;
}
