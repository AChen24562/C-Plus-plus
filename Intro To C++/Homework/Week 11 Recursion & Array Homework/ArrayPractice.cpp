#include <iostream>
#include <string>
using namespace std;

void firstArray(int num[], const int size){
  cout << "Original Array (a): ";
  for(int i=0; i < size; i++){
  num[i] = i;
  cout << num[i] << "\t";
}
}

void reverseNums(int num[], const int size){
  cout << "Original Array (b): ";
  for(int i = 0; i * 2 < size; i++){
    int x = num[i];
    num[i] = num[size-1-i];
    num[size-1-i]=x;
  }
  for(int i=0; i< size; i++){
    cout << num[i] << "\t";
  }
}



int main(){
  const int size =10;
  int numbers[size];

// First array code
  firstArray(numbers, size);
  cout << endl << endl;

  // Add 10 code
  cout << "Updated Array (a): ";
    for(int i=0; i < size; i++){
    numbers[i] = i+10;
    cout << numbers[i] << "\t";
      }
cout << endl << endl;

  // Reverse Order Code
    reverseNums(numbers, size);
    cout << endl << endl;


  // Multiply data by 2
    cout << "Updated Array (b): ";

    for(int i=0; i< size; i ++){
      numbers[i] = numbers[i] *2;
      cout << numbers[i]<< "\t";
    }
    cout << endl << endl << numbers[0];




    return 0;
}
