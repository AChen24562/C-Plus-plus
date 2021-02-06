#include <iostream>

using namespace std;

// Linear Function

// recursive(array, 5) -->print array[4], recursive(array, 4)
// recursive(array, 4) -->print array[3], recursive(array, 3)
// recursive(array, 3) -->print array[2], recursive(array, 2)
// recursive(array, 2) -->print array[1], recursive(array, 1)
// recursive(array, 1) -->print array[0]

void recursive(const int array[], int CAP){
  if(CAP == 1){
    cout << array[CAP -1]<< " ";
  }
  else{
    cout << array[CAP-1] << " ";
    return recursive(array, CAP -1);
  }
}


int main(){

const int CAP = 5;
int array[CAP] = {1, 2, 3, 4, 5};

for(int i=0; i <CAP; i++){
  cout << array[i] << " ";
}

cout << endl;
recursive(array, CAP);



return 0;

}
