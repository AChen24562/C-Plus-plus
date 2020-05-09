//Alex Chen
//Prof. Sun
//Week 11 Recursion & Array Homework Part 1


#include <iostream>
#include <string>
using namespace std;

//Original Array
void firstArray(int num[], const int size){
  cout << "Original Array (a): ";
  for(int i=0; i < size; i++){
  num[i] = i;
    }
}

//Reverse Numbers
void reverseNums(int num[], const int size){
  cout << "Original Array (b): ";
  for(int i = 0; i * 2 < size; i++){
    int x = num[i];
    num[i] = num[size-1-i];
    num[size-1-i]=x;
  }
}

//Display Arrays
void outputArray(int num[], const int size){
  for(int i=0; i < size; i++){
    cout << num[i] << "\t";
  }
  cout << endl << endl;
}


int main(){
  const int size =10;
  int numbers[size];

// First array code
  firstArray(numbers, size);
  outputArray(numbers, size);

 // Add 10 code
  cout << "Updated Array (a): ";
    for(int i=0; i < size; i++){
    numbers[i] = i+10;
      }
    outputArray(numbers, size);


  // Reverse Order Code
    reverseNums(numbers, size);
    outputArray(numbers, size);


  // Multiply data by 2
    cout << "Updated Array (b): ";

    for(int i=0; i< size; i ++){
      numbers[i] = numbers[i] *2;
    }
    outputArray(numbers, size);




    return 0;
}
