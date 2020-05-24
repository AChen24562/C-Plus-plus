#include <iostream>
using namespace std;

void populate(int num[], int amount){
  for(int i =0; i < amount; i++){
    num[i] = i+1;

  }

}

void display(int num [], int amount){

    for(int i =0; i < amount; i++){
      cout << num[i]<< " ";
    }

}

int main(){
  const int size = 100;
  int num[size];

  int amount =5;

  populate(num, amount);
  display(num, size);

  return 0;
}
