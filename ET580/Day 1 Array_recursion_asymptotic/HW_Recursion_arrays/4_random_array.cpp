#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;
/* Create loop that runs through the SIZE
create random int
create boolean
run through the array to make sure int doesn't already exist
if exists bool is false

Run through original loop again
If int doesn't exist bool is true and will assign value
*/

void fill_array(int array[], const int size){
srand(time(NULL));

for(int i =0; i < size; ){
int random_value = rand() % size + 1;
bool unique = true;

  for(int j = 0; j <i; ++j){
    if(random_value == array[j]){
      unique = false;
      break;
    }

  }

  if(unique){
    array[i] = random_value;
    i++;
  }
}

for(int i =0; i < size; i++){
  cout << array[i] << " ";
}
}



int main(){
const int size = 10;
int array[size];

fill_array(array, size);

  return 0;
}
