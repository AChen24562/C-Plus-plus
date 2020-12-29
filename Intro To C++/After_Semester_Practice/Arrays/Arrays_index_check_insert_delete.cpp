#include <iostream>
using namespace std;

void populate(int array[], const int SIZE);
void display(int array[], const int SIZE);
int getIndex(const int array[], const int& AMOUNT, int element);
void check_index(int array[], int& AMOUNT, int element);

int main(){
  const int SIZE = 10;
  int array[SIZE];

  int amount = 5;
  populate(array, amount);
  display(array, amount);

  int element = 3;
  int index = getIndex(array, amount, element);
  //cout << endl << printf("%d is the index of %d\n", index, element) << endl << endl << "asd";
  check_index(array, amount, element);


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

int getIndex(const int array[], const int& AMOUNT, int element){
  for(int i =0; i< AMOUNT; i ++){
    if(array[i] == element){
      return i;
    }
  }
  return -1;
}


void check_index(int array[], int& AMOUNT, int element){
  int index = getIndex(array, AMOUNT, element);
  if(index < 0){
    cout << printf("\n%d is not within the array\n", element);
  }
  else{
    printf("\n%d exists in the array\n", element);
  }
}
