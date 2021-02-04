#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

/*
Explaination:
Create array with cap = 10
size = 0
print in main and add 1 to size for each iteration
  This is becasue I'm thinking about if someone else inpupt different
  amount of values
The print will add the proper amount of size

pass into an append function
check if there is space with size < CAP, if there is set new value
also output in the same function
*/

// '&' symbol here very important so that it updates the
// size variable in main as well, or it will either go over
// or get rid of 95 and input 100 there
void append(int array[], const int CAP, int &size, int value){
  if(size < CAP){
    array[size] = value;
    ++ size;
  }
  for(int i=0; i<size; i++) {
      cout << array[i] << " ";
  }
}


int main(){

const int CAP = 10;
int size = 0;

int array[CAP] = {10, 20, 30, 40, 50,60,70, 80};

for(int i=0; i<CAP; i++) {
  if(array[i] == 0){ // For the beginning when there are empty indexes
    break;
  }
    cout << array[i] << " ";
    size ++;
}
cout << endl;
append(array, CAP, size, 90);
cout << endl;
append(array, CAP, size, 95);
cout << endl;
append(array, CAP, size, 100); // should not print
cout << endl;
  return 0;

}
