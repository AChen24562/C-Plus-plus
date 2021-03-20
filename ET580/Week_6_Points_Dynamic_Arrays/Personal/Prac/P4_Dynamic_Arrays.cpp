#include <iostream>
#include <cassert>
using namespace std;

void print(const int *a, const int size){
  for(int i = 0; i < size; i++){
    cout << *(a+i) << " ";
  }
  cout << endl;
}

void print(const int *a, const int size, const int index){
  assert(index >=1 &&  index <= size -2);
  cout << *(a +index -1) << " ";
  cout << *(a+index) << " ";
  cout <<*(a +index +1) << " " << endl;
}

int main(){
  const int size = 10;
  int *array = new int [size] {1, 2, 3,4 ,5,6,7,8,9,10};
  print(array, size);
  print(array, size, 3);


  return 0;

}
