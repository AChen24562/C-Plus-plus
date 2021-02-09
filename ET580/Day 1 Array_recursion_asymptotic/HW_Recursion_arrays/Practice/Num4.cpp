#include <iostream>
#include <ctime>
using namespace std;

// Quadratic Time
/* Iterate from 0 to Size of array
  Every iteration creates a new random int and assigns it to current index of array

  if the index is not 0, run through the whole array again with in inner loop
  inner loop looks through array and if an index has the same value as generated int
  decrement outer loop by 1 and break
*/
void fill_array(int array[], const int CAP){
  srand(time(NULL));
  for(int i =0; i <CAP; i++){
    int random_int = rand() % CAP +1;
    array[i] = random_int;
    for(int j =0; j<i; j++){
      if(array[j] == random_int){
        i--;
        break;
      }
    }

  }
}

void print(int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    cout << array[i] << " ";
  }
}


int main(){

  int CAP = 10;
  int array[CAP];

  fill_array(array, CAP);
  print(array, CAP);

  return 0;
}
