#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

void populate_ar(int array[], const int SIZE){
  for(int i = 0; i < SIZE; i ++){
    array[i] = i;
  }
}

void display(int array[], const int SIZE){
  for(int i = 0; i <SIZE; i++){
    cout << array[i] << " ";
  }
}

int main(){
  const int SIZE = 10;
  int array[SIZE];

  populate_ar(array, SIZE);
  display(array, SIZE);


  return 0;

}
