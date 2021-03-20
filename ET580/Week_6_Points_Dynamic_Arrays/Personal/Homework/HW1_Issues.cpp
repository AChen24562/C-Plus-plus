#include <iostream>
using namespace std;

void populate(int *array, int size){
  for(int i =0; i < size; i ++){
    *(array+i) = i;
  }
}

void print(int *array, int size){
  for(int i =0; i <size; i++){
    cout << *(array +i) << " ";
  }
  cout << endl;
}

void printMem(int *array, int size){
  for(int i =0; i <size; i++){
    cout << array +i << endl;
  }
  cout << endl;
}

int *grow(int *array, int size, int newSize){
  int *newArr = new int[newSize]{};
  for(int i = 0; i <size; i ++){
    *(newArr +i) = *(array + i);
  }
  delete array;
  return newArr;
}

int main(){

  const int size = 2;
  const int newSize = 4;
  int *array = new int[size]{}; // WINDOWS REQUIRES {} OR IT WILL NOT DEFAULT TO 0

  populate(array, size);
  print(array, size);
  printMem(array, size);
  cout << endl;

  array = grow(array, size, newSize);
  print(array, newSize);
  printMem(array, newSize);


  return 0;
}
