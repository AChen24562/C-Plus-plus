#include <iostream>
using namespace std;

int getIndex(const int array[], const int size, int num){
  for(int i=0; i < size; i++){
    if(array[i] == num)
        return i;
  }


  cout << "Invalid input value. index cannot be found\n";
  return -1;
}

int main(){
  const int size = 5;
  int array[size] = {0,1,2,3,4};

  cout << "The number 4 is at index: " << getIndex(array, size, 10);





    return 0;
}
