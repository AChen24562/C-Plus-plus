#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

/*Start from i =index 0, print value at index 0,
add 1 to index, repeat until i = size  is reached
*/
void iterative_print(int array[], const int size){
  for(int i =0; i < size; i++){
    cout << array[i] << " ";
  }
}

/*
Recursively print backwards
Base Case: when size = 0
Recurisive Action: call same function with size -1
and print value at index = size

Trace:
array = {1, 2, 3, 4, 5}
recursive_print(array, 5) -->5
  recursive_print(array, 4) --> 4
    recursive_print(array, 3) --> 3
      recursive_print(array, 2)  --> 2
        recursive_print(array, 1) -- >1
          recursive_print(array, 0) -- end
        recursive_print(array, 1)
      recursive_print(array,2)
    recursive_print(array,3)
  recursive_print(array,4)
recursive_printn(array,5)
*/
void recursive_print(int array[], const int size){
  if(size == 0){
    return;
  }
  cout << array[size- 1] << " ";
  recursive_print(array, size -1);
}

int main(){

const int CAPACITY = 10;
int size = 5;

int array[size] = {1, 2, 3, 4, 5};

iterative_print(array, size);
cout << endl;
recursive_print(array, size);

  return 0;
}
