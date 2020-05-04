#include <iostream>
using namespace std;

int main(){
  const int size = 10;
  int numbers[size];
  int amount =5;

  for(int i=0; i < amount; i ++){
    numbers[i] = i+1;
    cout << numbers[i] << " ";
  }

  


  return 0;
}
