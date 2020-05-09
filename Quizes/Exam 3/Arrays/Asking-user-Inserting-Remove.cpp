#include <iostream>
#include <ctime>
using namespace std;

// Remove an Element
int getIndex(const int n[], const int& size, int number){
  for(int i=0; i< size; i++){
    if(n[i] == number)
      return i;
  }
  return -1;
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

// Insert an element
void populate(int array[], int amount){
  srand(time(NULL));

  for(int i =0; i < amount; i++){
    array[i] = rand() %101;
  }
}

void display(int array[], int size){
  cout << "Your array consists of: ";
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
  }
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
      n[index-1] = newNumber;
      amount++;
  }
}

void ask(int& index, int& newNum){
  cout << "Enter an index: ";
  cin >> index;
  cout << "Enter a Number: ";
  cin >> newNum;
}

int main(){
  const int size =10;
  int array[size];
  int amount = 5;
  int index, newNum;

  populate(array, amount);
  display(array, amount);
  cout << endl << endl;


  ask(index, newNum);
  insertAt(array, amount, size, index, newNum);
  display(array, amount);


  cout << endl << endl << "Removal of elements ";
  ask(index, newNum);
  removeElement(array,amount,newNum);
    display(array, amount);
  return 0;
}
