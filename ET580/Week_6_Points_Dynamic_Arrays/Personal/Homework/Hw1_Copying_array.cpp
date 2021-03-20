#include <iostream>
using namespace std;

void populate(int *arr, const int size){
  for(int i = 0; i <=size-1; i ++){
    *(arr+i) = i;
  }

}

void print(int *arr, const int size){
  for (int i = 0; i <size; i ++){
    cout << *(arr + i) << " ";
  }
  cout << endl;
}

void printMem(int *arr, const int size){
  for(int i =0; i < size; i ++){
    cout << (arr +i) << endl;
  }
  cout << endl;
}

int* grow(int *arr, int size, int newSize){
  int *newArr = new int[newSize];
  for(int i = 0; i < size; i ++){
    *(newArr + i) = *(arr +i);
  }

// Printing part
  cout << endl << endl <<"Inside Grow: " << endl;
  for(int i = 0; i < newSize; i ++){
    cout << *(newArr + i) << " ";
  }
  cout << endl;
  for(int i =0; i < newSize; i ++){
    cout <<(newArr +i) << endl;
  }
  cout << endl;
  return newArr;
}

int main(){
  const int size = 2;
  int *array = new int[size];
  populate(array, size);
  print(array, size);
  printMem(array, size);

  const int newSize = 4;
  int *newArr = grow(array, size, newSize);
  print(newArr, newSize);
  printMem(newArr, newSize);


  return 0;
}
