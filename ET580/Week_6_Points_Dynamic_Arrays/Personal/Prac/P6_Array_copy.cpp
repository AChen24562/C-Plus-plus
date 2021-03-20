#include <iostream>
using namespace std;

void print(int *arr, const int size){
  for(int i =0; i <size; i ++){
    cout << *(arr+i) << " ";
  }
  cout << endl;
}

int* copy(int *array, const int oldSize, const int newSize){
  int *newArray = new int[newSize]{};
  for(int i = 0; i < newSize; i ++){
    if(i == oldSize){
      break;
    }
    *(newArray+i) = *(array+i);

  }
  return newArray;
}

int main(){
  const int size = 10;
  int *array = new int[size]{10, 20, 30, 40, 50, 60, 70, 80,90,100};
  print(array, size);

  int *array2 = copy(array, 10, 15);
  print(array2, 15);

  int *array3 = copy(array, 10, 5);
  print(array3, 5);


  return 0;
}
