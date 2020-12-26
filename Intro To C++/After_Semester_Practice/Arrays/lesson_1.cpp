#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

int main(){
  const int SIZE = 10;
  int array[SIZE];

  for(int i = 0; i < SIZE; i ++){
    array[i] = i;
  }

  for(int i =0; i < SIZE; i ++){
    cout << array[i] << " ";
  }



  return 0;

}
