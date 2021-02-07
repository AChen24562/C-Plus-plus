#include <iostream>

using namespace std;
// Constant Time Function
/* See if size is less than current CAP if array

If it is add input value to the last index of array and increment size
*/
  void append(int array[], int &size, const int CAP, int value){
    if(size < CAP){
      array[size] = value;
      size ++;
    }
    else{
      cout << endl <<"Exceeds CAP"<< endl;
    }
  }

  void print(int array[], int size){
    for(int i =0; i<size; i++){
      cout << array[i] << " ";
    }
    cout << endl;
  }


int main(){

  int const CAP = 10;
  int size= 8;

  int array[CAP] = {10, 20, 30, 40, 50,60,70, 80};
  append(array, size, CAP, 90);
  print(array, size);
  append(array, size, CAP, 95);
  print(array, size);
  append(array, size, CAP, 100);
  print(array, size);

  return 0;

}
