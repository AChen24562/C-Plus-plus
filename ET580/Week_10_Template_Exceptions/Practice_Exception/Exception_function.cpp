#include <iostream>
using namespace std;

int exception1(int n){
  if(n < 1 || n >10){throw "Number is not within 1 - 10";}
  return n + 2;
}

int main(){
  int num;
  cout << "Enter a number between 1 -10: ";
  cin >> num;

  try{
    cout << exception1(num);
  }
  catch(const char *e){
    cout << "Error: " <<e <<endl;
  }




  return 0;
}
