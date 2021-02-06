#include <iostream>

using namespace std;
// Linear Time
void insert_at(int array[], const int CAP, int &size, int index, int value){
   if(size < CAP && index >= 0 && index <= size){
     for(int i=size; i> index;  i--){
       array[i] = array[i -1];
     }
     size ++;
     array[index] = value;
   }
}

void print(int array[], int size){
  for(int i =0; i < size; i ++){
    cout << array[i] << " ";
  }
  cout << endl;
}


int main(){

const int CAP = 15;
  int size = 10;

  int array[size] = {10, 20, 30, 40, 50, 60, 70, 80, 90 , 100};

  insert_at(array, CAP, size, 0, 5);
  print(array, size);
  insert_at(array, CAP, size, 11, 150);
  print(array, size);
  insert_at(array, CAP, size, 0, 21);
  print(array, size);
  return 0;
}
