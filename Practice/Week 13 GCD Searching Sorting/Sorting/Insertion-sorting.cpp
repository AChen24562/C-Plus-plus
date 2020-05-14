#include <iostream>
#include <ctime>
using namespace std;

  void insertionSort(int array[], int size){
    int element, pos;
    for(int i=1; i < size; ++i){
      element = array[i];
      pos = i;

      while(pos >0 && array[pos-1] > element){
        array[pos] = array[pos -1];
        pos =pos -1;
      }

      array[pos] = element;
    }
  }

  void populate(int array[], const int& size){
    for(int i =0; i <size; i++){
      array[i] = rand() %100 +1;
    }
  }

  void output(int array[], const int& size){
    for(int i =0; i <size; i++){
      cout << array[i]<< " ";
    }
  }

int main(){
  srand(time(NULL));
  const int size=10;
  int array[size];

// Populate array with random number 0 - 100
  populate(array, size);
  cout << endl << endl;
  cout << "Original: ";
  output(array, size);
  cout << endl << endl;

// Insertion Sorting
  insertionSort(array, size);
  cout << "Sorted: ";
  output(array, size);
  cout << endl << endl;
  cout << "Largest Element: " << array[size-1];

  return 0;
}
