#include <iostream>
#include <ctime>
using namespace std;

void inputMonth(string array[], const int size){
  cout << "Enter 12 months below. "<< endl;
  for(int i =0; i <size; i ++){
    cout << "Enter month " << i +1 << ": ";
    cin >> array[i];
  }
}

void outputMonth(string array[], const int size){
  cout << endl << endl << "Input Months: "<< endl;
  for(int i =0; i < size; i ++){
    cout << array[i];
  }
  cout << endl << "The spring semester is in the following months: " << endl;
  for(int i =0; i < 5; i ++){
    cout << array[i] << endl;
  }
}

int main(){
  const int size = 12;
  string array[size];

  inputMonth(array, size);
  outputMonth(array, size);


  return 0;
}
