#include <iostream>

using namespace std;
/* start from 0 to size of array, incrementing by 1
  print element  at current inrementation
*/
void iterative(int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    cout <<  array[i] <<" ";
  }
  cout << endl;
}

// Linear Function
/*
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
void recursive(int array[], const int CAP){
  if(CAP == 1){
    cout << array[CAP -1];
    return;
  }
  else{
    cout << array[CAP-1] << " ";
    return  recursive(array, CAP-1);
  }
}



int main(){
  const int CAP = 5;
  int array[5] = {1, 2,3, 4,5};
  iterative(array, CAP);
  recursive(array, CAP);


return 0;

}
