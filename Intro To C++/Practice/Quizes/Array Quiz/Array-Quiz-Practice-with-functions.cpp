#include <iostream>
using namespace std;

// Fill Array
void populate(int num[], int amount){
  int begin =1;
  for (int i =0; i <amount; i ++){
    num[i] = i+1;
  }
}
// Display array
void display(int num[], int size){
  for (int i =0; i <size; i++){
    cout << num[i] << " ";
  }
}

// Insert an element
void insert(int n[], int& amount, const int& size, int index, int newNumber){
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

int main(){
  // Variables
  const int size = 10;
  int numbers[size] ;
  int amount =5;

  // Fill Array
  populate(numbers, amount);
  // Display Array
  display(numbers, amount);

cout << endl;
  // Inert an element
  insert(numbers, amount, size, 5, 6);
  display(numbers, amount);




  return 0;
}
