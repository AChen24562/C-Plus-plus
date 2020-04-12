/*#include <iostream>
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
}*/
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
