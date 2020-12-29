#include <iostream>
using namespace std;

// Functions
void populate(int array[], const int SIZE){
  for(int i = 0; i < SIZE; i++){
    array[i] = i;
  }
}

void display(int array[], const int SIZE){
  for(int i =0; i < SIZE; i ++){
    cout << array[i] << " ";
  }
}

// Element's index
int getIndex(const int array[], const int& AMOUNT, int element){
  for(int i =0; i< AMOUNT; i ++){
    if(array[i] == element){
      return i;
    }
  }
  return -1;
}


// Check if element is within array
void check_index(int array[], int& AMOUNT, int element){
  int index = getIndex(array, AMOUNT, element);
  if(index < 0){
    printf("\n%d is not within the array\n", element);
  }
  else{
    printf("\n%d exists in the array\n", element);
  }
}


void removeElement(int array[], int& amount, int element){
  int index = getIndex(array, amount, element);
  if(index < 0){
    cout << "Invalid" << endl;
    return;
  }
  amount --;
  for(int i = index; i < amount; i++){
    array[i] = array[i+1];
  }

}

int main(){
  const int SIZE = 10;
  int array[SIZE];

  int amount = 5;
  populate(array, amount);
  display(array, amount);

  int element = 3;
  int index = getIndex(array, amount, element);
  printf("\n%d index is %d\n", element, index );

  int incorrect_element = 20;
  check_index(array, amount, element);
  check_index(array,amount, incorrect_element);
  removeElement(array, amount, element);
  display(array, amount);


  return 0;
}
