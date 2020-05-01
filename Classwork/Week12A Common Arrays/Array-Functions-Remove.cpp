#include <iostream>
using namespace std;


int getIndex(const int n[], const int& size, int number){
  for(int i=0; i< size; i++){
    if(n[i] == number)
      return i;
  }
  return -1;
}

void output(const int n[], int amount){
  cout << "Array of " << amount << " elements: ";
    for(int i =0; i < amount; i++){
      cout <<n[i] << " ";
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





int main(){

    const int size = 10;
    int numbers[size] = {1, 2, 3, 4, 5};
    int amount = 5;

    output(numbers, amount);

    cout << endl << endl;

    removeElement(numbers, amount, 5);
    output(numbers, amount);

    cout << endl << endl;

  return 0;
}
