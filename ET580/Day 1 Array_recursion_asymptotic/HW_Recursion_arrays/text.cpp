#include <iostream>

using namespace std;

void swap(int array[], int size){
  cout << "Original: ";
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
    }
  cout << endl;
  int max = array[0];
  int min = array[0];
  for(int i =1; i<size; i ++){
    if(array[i] > max){
      max = i;
    for(int j =0; j <size; j++){
      if(min >= array[j]){
        min = j;
      }
    }
    }
  }

  int temp = array[min];
  array[min] = array[max];
  array[max] = temp;
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
    }
}


int main(){
  const int CAP =10;
  int size = 4;
  int array[CAP] = {1, 4,2,10};

  swap(array, size);

  return 0;


}
