#include <iostream>
#include <cassert>
using namespace std;

void print( int *array, const int size){
  for(int i = 0; i  <size; i ++){
    cout << *(array +i) << " " ;
  }
  cout << endl;
}
void print(int *array, const int size, const int index){
  assert(index >= 1 && index <= size -2);
  cout << *(array + index-1) << " ";
  cout << *(array + index) << " ";
  cout << *(array + index+1) << " ";
}

int main(){
  int size = 10;
  int *arr =  new int[size] {10, 20, 30, 40,50,60,70,80,90,100};

  print(arr, size);
  print(arr, size, 3);

  return 0;

}
