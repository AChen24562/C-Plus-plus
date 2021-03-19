#include <iostream>
using namespace std;


int main(){
  const int size = 5;
  int *array = new int[size] {0,1};


  for(int i = 2; i <size; i ++){
    *(array+i) = -1;
  }

  for(int i = 0; i <size; i ++){
    cout << *(array+i) <<" ";
  }






  return 0;
}
