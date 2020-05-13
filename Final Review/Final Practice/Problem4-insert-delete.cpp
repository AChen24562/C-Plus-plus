#include <iostream>
using namespace std;

int getIndex(const int n[], const int& size, int number){
  for(int i=0; i< size; i++){
    if(n[i] == number)
      return i;
  }
  return -1;
}

void insertAt(int n[], int& amount, const int& size, int index, int newNumber){
  if (index >= size){
      cout << "Index number exceeds capacity of array. New number can not be added.\n";
      return;
  }

  if(amount < size)
  {
      for(int i=amount; i>index; i--) {
          n[i] = n[i-1];
      }
      n[index] = newNumber;
      amount++;
  }
}

void removeElement(int n[], int& amount, int number){
  int index = getIndex(n, amount, number);
    if(index < 0){
      cout << "Invalid input. Index cannot be found." << endl;
      return;
    }
    amount --;
    for(int i = index; i<amount; i++){
      n[i] = n[i+1];
    }
}

void output(int array[], int numElement){
  for(int i =0; i < numElement; i ++){
    cout << array[i] << " ";
  }
}

int main(){
  const int size = 100;
  int numElement = 10;
  int array[size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  insertAt(array, numElement, size, 10, 10);
  output(array, numElement);

// Remove element
  cout << endl << endl;
  removeElement(array, numElement, 0);
  output(array, numElement);
  return 0;
}
