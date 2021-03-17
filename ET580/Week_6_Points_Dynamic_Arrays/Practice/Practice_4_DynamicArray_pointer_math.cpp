#include <iostream>
#include <cassert>
using namespace std;

void print(int *array, int size){
  for(int i =0; i <size; i++){
    cout << *(array+i) << " ";
  }
  cout << endl;
}

void print(int *array, int size, int index){
  assert(index >=1 && index <= size -2);
  cout << *(array+index-1)
      << " "<< *(array+index)
      <<" " << *(array+index +1);

}

int main(){
  int size = 10;
  int *a = new int[size] {10 ,20,30, 40,50,60,70,80,90,100};
  print(a, size);
  print(a, size, 3);
  delete [] a;


  return 0;


}
