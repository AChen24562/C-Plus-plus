#include <iostream>

using namespace std;

void swap(int array[], int size){
  int max = array[0];
  int min = array[0];
  for(int i =1; i<size; i ++){
    if(array[i] > max){
      max = i;
    for(int j =0; j <size; j++){
      if(min > array[j]){
        min = j;
      }
    }
    }
  }
  cout << min << endl << max << endl;
  int temp = array[min];
  array[min] = array[max];
  array[max] = temp;
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
    }
}


int main(){
  int size = 7;
  int array[size] = {6, 9, 4,2,7,10,5};
  swap(array, size);

    return 0;


}
