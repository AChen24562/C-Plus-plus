#include <iostream>
using namespace std;


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

void output(const int n[], const int& size){
  cout << "Array of " << size << " elements: ";
  for(int i = 0; i <size; i++){
    cout << n[i] << " ";
  }
}
int main(){

  const int size = 10;
  int numbers[size] = {1, 2, 3, 4, 5, 6, 7, 8};
  int amount = 8;

  output(numbers, amount);
  cout << endl << endl;

  insertAt(numbers, amount, size, 8, 9);
  output(numbers, amount);

  cout << endl << endl;
  insertAt(numbers, amount, size, 9, 10);
  output(numbers, amount);


return 0;
}
