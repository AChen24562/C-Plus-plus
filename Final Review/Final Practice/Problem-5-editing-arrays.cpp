#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// What index is a certain number at;
int getIndex(const int n[], const int& size, int number){
  for(int i=0; i< size; i++){
    if(n[i] == number)
      return i;
  }
  return -1;
}

// Replace a number at which index
void replace(int array[], const int amount, int numReplace, int newNum){

  if(numReplace < amount){
    array[numReplace] = newNum;
  }
  else
      cout << "Failed";
}

// Display
void display(int array[], const int amount){
  cout  << "You have " << amount << " elements" << endl;
  for(int i =0; i < amount; i++){
    cout << array[i] << " ";
  }
  cout << endl << endl;
}

// Append to the end of the array
  void append(int array[], int& amount, int size, int appendNum){
    if(amount < size){
      array[amount] = appendNum;
      amount ++;
    }
    else
      cout << "Number of elements are over the size limit "<< endl;
  }

  //Remove last element
  void remove(int array[], int& amount){
    amount --;
  }

int main(){
  const int size = 15;
  int amount = 10;
  int array[size] = {0,1,2,3,4,5,6,7,8,9};
    display(array, amount);

    //Index of 4
    cout << "The index of '4' is " << getIndex(array, size, 4) << endl << endl;

    // Replace
    cout << "Replace 0 with 10: ";
    replace(array, amount, 0, 10);
    display(array, amount);

    // Append an Element
    cout << "Append 11 to the last element " << endl;
    append(array, amount, size, 11);
    display(array, amount);

    // delete last element
    cout << "Remove last element " << endl;
    remove(array, amount);
    display(array, amount);
      return 0;
}
