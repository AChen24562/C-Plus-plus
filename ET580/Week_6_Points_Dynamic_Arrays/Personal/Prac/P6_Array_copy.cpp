#include <iostream>
using namespace std;

void print(const int *arr, const int size){
  for(int i = 0; i <size; i ++){
    cout << *(arr +i) << " ";
  }
  cout << endl;
}

int *copy(const int *arr, const int oldSize, const int newSize){
  int *newArr = new int[newSize]{};
  for(int i=0; i < oldSize; i++){
    if(i == newSize){
      break;
    }
    *(newArr+i) = *(arr+i);
  }
  return newArr;
}

int main(){
  const int size = 10;
  int *arr = new int[size]{10,20,30,40,50,60,70,80,90,100};
  print(arr, size);

  int *arrLarge = copy(arr,size, 15);
  print(arrLarge, 15);

  int *arrSmall = copy(arr, size, 5);
  print(arrSmall, 5);
  return 0;

}
