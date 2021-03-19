#include <iostream>
using namespace std;

void populate(int *array, int size){
  for(int i = 0; i <size; i++){
    *(array +i) = i; // Using pointer arithmetic to populate array from 0 - size array
  }
}

void print(int const *array, const int size){
  for(int i = 0; i <size; i++){
    cout << *(array+i) << " "; // Using pointer arithmetic to index array
  }
  cout << endl;
}

void printMemory(int const *array, const int size){
  for(int i = 0; i <size; i++){
    cout << (array+i) << endl; // Same pointer arithmetic, but no dereference (*)
  }
  cout << endl;
}

int *grow(int const *array, const int size, const int newSize){
  int *newArr = new int[newSize]; // create new pointer array with new size (larger)
  for(int i =0; i <size; i++){  // copy old to new, but since new is larger, the rest is 0
    *(newArr+i) = *(array+i);
  }
  // Visulization of Grow
  cout << "Inside Grow: "; // Shows the new pointer array in grow function
  for(int j = 0; j < newSize; j ++){
    cout << *(newArr+j) <<" ";
  }
  cout << endl;
  // memory Visulization of inside grow
  for(int j = 0; j < newSize; j ++){
    cout << newArr+j <<" " << endl;
  }

  // used to get rid of the original array
  // so that memory leak doesn't occur
  delete [] array;
  return newArr;  // return new array with larger size
}


int main(){
  /*
  const int size = 2;
  const int newSize = 4;

  int *array1 = new int[size]{};
  populate(array1, size);
  print(array1, size);
  printMemory(array1, size);

  array1 = grow(array1, size, newSize);
  cout << endl << endl;
  print(array1, newSize);
  printMemory(array1, newSize);
  delete [] array1;*/
  cout << endl;
  int size, newSize;
  cout << "Enter a size: ";
  cin >> size;


  int *p = new int[size];
  cout <<"Original: " << endl;
  populate(p, size);
  print(p, size);
  printMemory(p, size);

  cout << "Enter a new size: ";
  cin >>newSize;

  p = grow(p, size, newSize);
  cout << endl << "After grow: " << endl;
  print(p, newSize);
  printMemory(p, newSize);


}
