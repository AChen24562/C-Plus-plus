#include <iostream>
#include <ctime>
using namespace std;

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

void populate(int array[], const int& size){
  for(int i =0; i < size; i++){
    array[i] = rand() %100 +1;
  }
}

void output(int array[], const int& size){
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
  }

}

int main(){
  srand(time(NULL));
  const int size = 20;
  int array[size];

//Original randomly generated numbers
  cout << endl << endl << "Original: ";
  populate(array, size);
  output(array, size);
  cout << endl << endl;

// Sorted
  cout << "Sorted: ";
  selectionSort(array, size);
  output(array, size);




  return 0;
}
