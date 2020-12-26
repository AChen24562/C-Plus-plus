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

int main(){
  const int SIZE = 10;
  int array[SIZE];

  populate_ar(array, SIZE);



  return 0;

}
