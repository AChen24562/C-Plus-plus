#include <iostream>

using namespace std;

void print(int array[], const int size){
  for(int i = 0; i<size; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

void remove_last(int array[], int &size){
  if(size > 0){
    size--;
  }
}

void remove_first(int array[], int& size){
  if(size > 0){
    for(int i =0; i < size-1; i++){
      array[i] = array[i+1];
    }
    size--;
  }
}

void remove_index(int array[], int &size, int index){
if(size > 0){
  for(int i =index; i <size-1; i++ ){
    array[i] = array[i+1];
  }
  size --;
}
}

void remove_value(int array[], int &size, int value){
if(size >0){
  for(int i =0; i<size; i++){
    if(array[i] ==value){
      for(int j = i; j <size -1; j++){
        array[j] = array[j+1];
      }
      break;
    }
  }
  size --;
}
}

int main(){
  const int CAP =10;
  int array[CAP] = {1, 2, 3,4,5, 6, 7,8};
  int size = 8;

  print(array, size);

  // Remove Last index
  remove_last(array, size);
  print(array, size);

  // remove first index
  remove_first(array, size);
  print(array, size);

  // remove index 2
  remove_index(array, size, 2);
  print(array, size);

  // remove idnex with value 5
  remove_value(array,size, 7);
  print( array, size);
  return 0;


}
