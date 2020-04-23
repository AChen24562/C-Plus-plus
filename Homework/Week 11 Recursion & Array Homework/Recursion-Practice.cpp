#include <iostream>
using namespace std;

void outputStars(int n) {
  int digit;
    if(n<10) {
      for(int i =0; i <n; i ++){
        cout << "* " ;
      }
      cout << endl;
    }
    else {
        digit = n%10;

        for(int i =0; i <digit; i ++){
          cout << "* " ;
        }
        cout << endl;
        outputStars(n/10);
    }
}

void outputStars(int n) {
  int digit;

  while(n > 0){
    digit = n % 10;
    n /= 10;
    for(int i =0; i <digit; i ++){
      cout << "* " ;
    }
  cout << endl;
  }
}


int main(){
  /*int n = 31555;
  int digit;

while(n > 0){
  digit = n % 10;
  n /= 10;
  for(int i =0; i <digit; i ++){
    cout << "* " ;
  }
cout << endl;
}*/
int n =543;
outputStars(n);



return 0;
}
