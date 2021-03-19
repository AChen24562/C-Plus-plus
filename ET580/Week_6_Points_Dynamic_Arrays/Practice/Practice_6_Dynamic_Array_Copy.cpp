#include <iostream>
using namespace std;

void print(const int *array, const int size){
  for(int i =0; i <size; i ++){
    cout << *(array+i) << " ";
  }
  cout << endl;
}

int* copy(int* array, int oldSize, int newSize){
  int *a2 = new int[newSize];
  for(int i = 0; i < newSize; i ++){
    *(a2+i) = *(array+i);

    // Stop when it reaches old size, so rest can be filled with 0s
    if(i == oldSize){
      break;
    }
  }
  return a2;
}

int main(){
  int *array1 = new int[10] {10, 20, 30, 40, 50, 60,70,80,90,100};
  print(array1, 10);

  int *array_small = copy(array1, 10, 5);
  print(array_small, 5);

  int *array_large = copy(array1, 10, 15);
  print(array_large, 15);



  return 0;
}
