#include <iostream>

using namespace std;

// Can be constant or linear

void sorted_insert(int array[], int &size, const int CAP, int value){
  if(array[size -1] < value){
    array[size] = value;
    size ++;
  }
  else{
    for(int i =0; i < size; i++){
      if(value < array[i]){
        for(int j = size; j > i; j--){
          array[j] = array[j-1];
        }
        array[i] = value;
        size++;
        break;
      }
    }
  }
}


void print(int array[], int size){
  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main(){

  const int CAP = 15;
  int size = 10;

  int array[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90 , 100};

  sorted_insert(array, size, CAP, 105);
  print(array, size);
  sorted_insert(array, size, CAP, 25);
  print(array, size);
  return 0;
}
