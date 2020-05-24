#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

void writeBackwards(int n) {
    if(n<10) {
        cout << n << "";
    }
    else {

        cout << n%10 << "";
        writeBackwards(n/10);
    }
}

void writeInRows(int n){
      if(n<10) {
          cout << n << endl;
      }
      else {

          writeInRows(n/10);
          cout << n%10 << endl;
      }
}


void numDigits(int n, int digits){

  if(n<10) {
    digits+=1;
    cout << digits;
  }
  else {
      digits+=1;
      numDigits(n/10, digits);
  }

}


int main(){
  int n = 2019;
  writeBackwards(n);
  cout << endl << endl;

  writeInRows(n);
  cout << endl << endl;

  int digits = 0;
  numDigits(n, digits);




      return 0;
}
