#include <iostream>
#include <ctime>
using namespace std;

void populate(int num[], int amount){
  srand(time(NULL));

  for(int i =0; i < amount; i++){
    num[i] = rand() %101;
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

  int amount =20;

  populate(num, amount);
  display(num, amount);



  return 0;
}
