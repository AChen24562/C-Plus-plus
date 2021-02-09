#include <iostream>

using namespace std;
// Logarithmic Function
/*Steps:
  Outer loop that iterates from to Size of Array

  Inner Loop starts and 0 and to the size of the Array
  whenever the inner loop's value matches with the value of the array at
  the current index defined in the outer loop, print Q else print .
*/
void queen(const int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    for(int j = 0; j<CAP; j++){
      if(array[i] == j){
        cout << "Q " ;
      }
      else{
        cout << ". ";
      }
    }
    cout << endl;
  }
}


int main(){

  const int CAP = 4;
  int array[CAP] = {2, 1, 3, 0};

  queen(array, CAP);

  return 0;


}
