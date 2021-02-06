#include <iostream>

using namespace std;


// Constant Time
void append(int array[], int &size, const int CAP, int value ){
  if(size < CAP){
    array[size] = value;
    size ++;
  }
  else{
    cout << "Array filled" << endl;
  }
}

void print(int array[], int size){
  for(int i = 0; i < size; i ++){
    cout << array[i] << " ";
  }
  cout << endl << "Size: " << size << endl;
}

int main(){

  const int CAP = 10;
  int size = 8;
  int array[CAP] = {10, 20, 30, 40, 50, 60, 70, 80};

  print(array, size);
  append(array, size, CAP, 90);
  print(array, size);
  append(array, size, CAP, 99);
  print(array, size);
  append(array, size, CAP, 100);
  print(array, size);
  append(array, size, CAP, 90);
  print(array, size);

  return 0;

}
