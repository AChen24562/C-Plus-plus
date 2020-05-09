#include <iostream>
using namespace std;

  void populate(int array[],int size){
cout << "Enter Five Numbers: " << endl;
    for(int i=0; i<size; i++ ){

      cout <<"Number " << i+1 << ") ";
      cin >> array[i];
    }
  }

void display(int array[], int size){
  cout << "Your array consists of: ";
  for(int i =0; i <size; i++){
    cout << array[i] << " ";
  }
}


int main(){
  const int size = 5;
  int array[size];

  populate(array, size);
  display(array, size);
  return 0;
}
