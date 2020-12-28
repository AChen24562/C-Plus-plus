#include <iostream>
using namespace std;

void populate(int array[], const int SIZE);
void display(int array[], const int SIZE);
int getIndex(int array[], const int& AMOUNT, int element);
//void check_index(const int array[], const int AMOUNT, int element);

int main(){
  const int SIZE = 10;
  int array[SIZE];

  int amount = 5;
  populate(array, amount);
  display(array, amount);

  int element = 3;
  getIndex(array, amount, element);



  return 0;
}


// Functions
void populate(int array[], const int SIZE){
  for(int i = 0; i < SIZE; i++){
    array[i] = i;
  }
}

void display(int array[], const int SIZE){
  for(int i =0; i < SIZE; i ++){
    cout << array[i] << " ";
  }
}

int getIndex(int array[], const int& AMOUNT, int element){
  for(int i =0; i< AMOUNT; i ++){
    if(array[i] == element){
      return printf("\n%d's index is: %d\n", element, i);
    }
  }
  return -1;
}
