#include <iostream>
using namespace std;

void print(const int *array, const int size){
  for(int i =0; i <size; i++){
    cout << *(array +i) << " ";
  }
  cout << endl << endl;
}

int *copy(int *array, const int oldSize, const int newSize){
  int *newArr = new int[newSize]{};
  for(int i =0; i <oldSize; i++){
    if(i == oldSize){
      break;
    }
    *(newArr +i) = *(array + i);
  }
  return newArr;
}

int main(){
  const int size = 10;
  int *array = new int[size]{10, 20,30,40,50,60,70,80,90,100};

  print(array, size);
  int *largeArray = copy(array, size, 15);
  print(largeArray, 15);

  int *smallArray = copy(array, size, 5);
  print(smallArray, 5);

  return 0;
}
