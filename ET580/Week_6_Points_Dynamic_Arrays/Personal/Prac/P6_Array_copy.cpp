#include <iostream>
using namespace std;

void print(const int *array, const int size){
  for(int i = 0; i <size; i ++){
    cout << *(array +i) << " ";
  }
  cout << endl;
}

int* copy(const int *array, const int size, const int newSize){
  int *newArr = new int[newSize]{};
  for(int i = 0; i < newSize; i ++){
    if(i == size){
      break;
    }
    *(newArr +i) = *(array+i);
  }
  return newArr;
}

int main(){
  const int size = 10;
  int *array = new int[size]{10, 20, 30, 40,50,60,70,80,90,100};
  print(array, size);

  int newSizeBig = 15;
  int *bigArr = copy(array, size, newSizeBig);
  print(bigArr, newSizeBig);

  int newSizeSmall = 5;
  int *smallArr = copy(array, size, newSizeSmall);
  print(smallArr, newSizeSmall);


  return 0;

}
