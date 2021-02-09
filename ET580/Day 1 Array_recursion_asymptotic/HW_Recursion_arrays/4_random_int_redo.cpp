#include <iostream>
#include <ctime>
#include <bits/stdc++.h>

/* Quadratic Time, as the CAP increases, or the
size of the array increases the longer it will take in the end
to find a unique integer that fits. at the end it needs to
generate numbers that fit a pool of  1/size.
*/
/* Iterate from 0 to Size of array
  Every iteration creates a new random int and assigns it to current index of array

  if the index is not 0, run through the whole array again with in inner loop
  inner loop looks through array and if an index has the same value as generated int
  decrement outer loop by 1 and break
*/

using namespace std;
void fill_array(int array[], int CAP){
  srand(time(NULL));

  for(int i =0; i < CAP; i++){
    int random_value = rand() % CAP + 1; // random int

      array[i] = random_value; //assign value to array

/* loop that checks array, should not run when i =0 which makes
sense because the array should have only 1 value
then if it found a nonunique decrement i and end, which will cause
the outer loop to rerun at the same value because i++ then i-- is no gain
regenerating the value

Issue that I thought of is that if the rand int generates a nonunique multiple times
it could increase the iterations
*/
    for(int j =0; j < i; j ++){
      if(array[j] == random_value){
        i--;
        break;
      }

    }

}

  for(int i =0; i < CAP; i++ ){
    cout << array[i] << " ";
  }
  cout << endl << endl;
}


int main(){
int CAP = 10;

int array[CAP];

fill_array(array,  CAP);
//test
int n = sizeof(array) / sizeof(array[0]);

sort(array, array + n);
for (int i = 0; i < n; ++i)
        cout << array[i] << " ";

  return 0;
}
