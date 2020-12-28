#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

// Making an array
void populate_ar(int array[], const int SIZE){
  for(int i = 0; i < SIZE; i ++){
    array[i] = i;
  }
}as

// Displaying array
void display(int array[], const int SIZE){
  for(int i = 0; i <SIZE; i++){
    cout << array[i] << " ";
  }
}

// Recursive Sum
int sumArray(int array[], int counter, int sum){
  if(counter == 0){
    return sum;
  }
  else{
    counter --;
    sum += array[counter];
    return sumArray(array, counter, sum);
  }
}

// Get index for specified element, if not found return -1
int getIndex(const int array[], const int size, int element){
  for(int i = 0; i <= size; i ++){
    if(array[i] == element){
      return i;
    }

  }
  return -1;
}

void check_element(int array[], const int SIZE, int element){
  int index = getIndex(array, SIZE, element);
  if(index < 0){
    cout << endl << "Invalid elment, " << element << " does not exist." << endl;
  }
}

int main(){

  // Init array
  const int SIZE = 5;
  int array[SIZE];

  populate_ar(array, SIZE);

  display(array, SIZE);
  cout << endl;

  int sum = 0;
  cout <<  sumArray(array, SIZE, sum);

  int element = 3;
  cout << endl << "Index of " << element << " is " << getIndex(array, SIZE, element);
  check_element(array, SIZE, 6);
  cout << getIndex(array, SIZE, 6);

  return 0;

}
