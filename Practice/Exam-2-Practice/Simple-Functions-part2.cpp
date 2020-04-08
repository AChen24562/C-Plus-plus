#include <iostream>
using namespace std;

int inputNum(){
  int num;
  cout << "Enter a number: ";
  cin >> num;
  cout << endl;
  return num;
}

int timesTwo(int num){
    int newNum = num * 2;
    cout << num << " * 2 = " << newNum;
    return newNum;
}

void timesPi(double x){
  double pi = 3.1415;
  cout << "Multiplied by pi is " << x * pi;
}

int main(){

int firstNum = inputNum();
cout << endl;
int newNum = timesTwo(firstNum);
cout << endl;
timesPi(newNum);
  return 0;
}
