#include <iostream>
#include <cassert>
using namespace std;


void print(int *a, int size){
  for(int i = 0; i <size; i++){
    cout <<*(a +i) << " ";
  }
  cout << endl;
}

void print(int *a, int size, int index){
  assert(index >= 1 && index <= size-2);
  cout << *(a+index -1) << " ";
  cout << *(a+index) << " ";
  cout << *(a+index+1) << " ";
}

int main(){
  int *arr = new int[10]{1, 2,3,4,5,6,7,8,9,10};
  print(arr, 10);
  print(arr, 10, 3);



  return 0;
}
