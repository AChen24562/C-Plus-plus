#include <iostream>
using namespace std;

void output(int array[], const int size){
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
  }

}


void selectionSort(int array[], const int& size){
  for(int pos=0; pos < size; ++pos){
      int min =pos;
      for(int element =pos+1; element < size; ++element){
        if(array[element] < array[min]){
          min =element;
          }
      }
      swap(array[pos], array[min]);
  }
}

int main(){
  const int size = 6;
  int array[size] = {1, 21, 5, 2, 67, 13};


  output(array, size);
cout << endl << endl;
  selectionSort(array, size);
  output(array,size);

    return 0;
}
