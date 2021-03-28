#include <iostream>
using namespace std;

void populate(int *arr, const int size){
  for(int i =0; i <size; i ++){
    *(arr+i) = i;
  }
}

void print(const int *array, const int size){
  for(int i =0; i<size; i ++){
    cout << *(array +i) << " ";
  }
  cout << endl;
}

void printMem(const int *array, const int size){
  for(int i =0; i <size; i ++){
    cout << (array +i) << endl;
  }
  cout << endl << endl;
}

int *grow(const int *array, const int size, const int newSize){
  int *newArr = new int[newSize]{};
  for(int i =0; i <size; i ++){
    *(newArr+i) = *(array+i);
  }
  return newArr;
}

int main(){
  const int size = 2;
  int *array = new int[size]{};
  populate(array, size);
  print(array, size);
  printMem(array, size);

  const int newSize = 4;
  int *largeArray = grow(array, size, newSize);
  print(largeArray, newSize);
  printMem(largeArray, newSize);





  return 0;
}
