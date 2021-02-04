#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

void insertAt(int array[], const int CAP, int &size, int index, int value){
  if(size < CAP && index >= 0 && index <= size){
    for(int i = size; i > index; --i){
      array[i] = array[i - 1];
    }
    array[index] = value;
    size ++;
  }
  for(int i=0; i<CAP; i++) {
    if(array[i] == 0){ // For the empty indexes
      break;
    }
      cout << array[i] << " ";
  }
  cout << endl;
}

void print(int array[], const int CAP, int &size ){
  for(int i=0; i<CAP; i++) {
    if(array[i] == 0){ // For the empty indexes
      break;
    }
      cout << array[i] << " ";
      size ++;
  }
}


int main(){

  const int CAP = 20;
  int size = 0;

  int array[CAP] = {10, 20, 30, 40, 50,60,70, 80, 90, 100};

  print(array, CAP, size);
  cout << size;
  cout << endl;
  insertAt(array, CAP, size, 0, 5);
  insertAt(array, CAP, size, size, 150);
  insertAt(array, CAP, size, size/2, 55);
  //cout << size;




  return 0;
}
