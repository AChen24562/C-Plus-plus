#include <iostream>
using namespace std;

  int getIndex(int array[], int start, int end, int number){
    while(start <= end){
      int middle = (start + end) / 2;

        if(array[middle] == number){
          return middle;
        }
        else if(array[middle] > number){
          return getIndex(array, start, middle-1, number);
        }
        else{
          return getIndex(array, middle+1, end, number);
        }
    }
    return -1;
  }


int main(){
  const int size = 6;
  int array[size] = {1, 5, 14, 23, 31, 32};

  cout << endl;
  for(int i=0; i < size; i++){
    cout << array[i] << " ";
  }
  cout << endl << endl;

  cout << "Number 5 is located in index: " << getIndex(array, 0, size-1, 5) << endl;



  return 0;
}
