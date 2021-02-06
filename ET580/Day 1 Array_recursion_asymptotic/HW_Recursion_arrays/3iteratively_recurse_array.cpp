#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

/*Start from i =index 0, print value at index 0,
add 1 to index, repeat until i = size  is reached
*/
void iterative_print(int array[], const int CAP){
  for(int i =0; i < CAP; i++){
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
// recursive(array, 5) -->print array[4], recursive(array, 4)
  // recursive(array, 4) -->print array[3], recursive(array, 3)
    // recursive(array, 3) -->print array[2], recursive(array, 2)
      // recursive(array, 2) -->print array[1], recursive(array, 1)
        // recursive(array, 1) -->print array[0]
      recursive_print(array, 2)
    recursive_print(array,3)
  recursive_print(array,4)
recursive_print(array,5)

*/
void recursive_print(const int array[], int CAP){
  if(CAP == 1){
    cout << array[CAP -1]<< " ";
  }
  else{
    cout << array[CAP-1] << " ";
    return recursive_print(array, CAP -1);
  }
}


int main(){

const int CAP = 5;


int array[CAP] = {1, 2, 3, 4, 5};

iterative_print(array, CAP);
cout << endl;
recursive_print(array, CAP);

  return 0;
}
