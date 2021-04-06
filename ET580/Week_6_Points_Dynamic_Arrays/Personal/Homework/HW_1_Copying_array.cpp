#include <iostream>
using namespace std;

void populate(int *array, const int size){
  for(int i = 0; i <size; i ++){
    *(array + i ) = i;
  }
}

void print(const int *array, const int size){
  for(int i = 0; i < size; i ++){
    cout << *(array+i) << " ";
  }
  cout << endl;
}

void printMem(const int *array, const int size){
  for(int i = 0; i <size; i ++){
    cout << (array+i) << endl;
  }
  cout << endl << endl;
}

int *grow(const int *array, const int size, const int newSize){
  int *newArray = new int[newSize]{};
  for(int i =0; i <size; i ++){
    *(newArray+i) = *(array +i);
  }
  delete []array;
  return newArray;
}

int main(){
  int size = 2;
  int newSize = 4;

  int *array = new int[size]{};
  populate(array, size);
  print(array, size);
  printMem(array,size);

  array = grow(array, size, newSize);
  print(array, newSize);
  printMem(array, newSize);


  return 0;
}
