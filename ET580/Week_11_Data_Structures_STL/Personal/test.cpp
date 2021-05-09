#include <iostream>
using namespace std;

int getMem(int n){
  return &n;
}

int main(){
  int n = 10;
  cout << getMem(n);



  return 0;
}
