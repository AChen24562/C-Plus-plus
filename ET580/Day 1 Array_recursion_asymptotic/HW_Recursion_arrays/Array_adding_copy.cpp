#include <iostream>

using namespace std;

void print(const int array[], const int size){
  for(int i =0; i< size; i++){
    cout << array[i] <<" ";
  }
  cout << endl;
}

void append(int array[], int &size, const int CAP, int value){
  if(size < CAP){
    array[size] = value;
    size ++;
  }
}

void insert_at(int array[], int &size, const int CAP, int index, int value){
  if(size < CAP && index >=0 && index <=size){
    for(int i =size; i>index; i--){
      array[i] = array[i-1];
    }
    array[index] = value;
    size++;
  }
}

void sorted_insert(int array[], int &size, const int CAP, int value){
  if(size < CAP){
    if(array[size-1] < value){
      array[size] = value;
      size++;
    }
    else{
      for(int i =0; i <size; i ++){
        if(value < array[i]){
          for(int j=size; j> i; j--){
            array[j] = array[j-1];
          }
          array[i] = value;
          break;
        }
      }
      size++;
    }
}
}
int main(){
  int CAP =10;
  int size =5;

  int array[CAP] = {10, 20, 30, 40, 50};
  print(array, size);

  append(array, size, CAP, 60);
  print(array, size);

  insert_at(array, size, CAP, 1, 15);
  print(array, size);

  sorted_insert(array, size, CAP, 150);
  print(array, size);

  sorted_insert(array, size, CAP, 45);
  print(array, size);
  cout << size;
  return 0;
}
