#include <iostream>

using namespace std;

// Quadratic Time
/* Steps:
  Check if +1 to size will exceed CAP

  Function immediately checks if the input value is greater than
  the value at the last array index, if input is greater
  place it at the end and increment size

  else: Create a for loop that increments through the entire array
  stopping when the loop hits an index that is greater than the input value

    inner for loop that decrements from the end of the loop to
    current index 'i' and moves  every value to the right

  current outer loop index that it stopped at is assigned the input value
  size incremented, break
*/
void print(int array[], const int &size){
  for(int i = 0; i < size; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}


void sorted_insert(int array[], const int CAP, int &size, int value){
  if(size < CAP){ // Make sure adding value doesn't go over limit
    if(array[size -1] < value){ // if the array's last value is less than value, add into last
      array[size] = value;
      size++; //increment size
    }
    else{  // if not do this
      for(int i=0; i<size; i++){ // Start from the first index
    if(value<array[i]){  // once the loop goes to an index above the value of our desired value
        for(int j=size; j>i; j--){ // move all index values to the right, starting with the one
                                  // that triggered the loop
          array[j]=array[j-1];
        }

     array[i]=value; // assign our value to the new open index
     size++; // increment size and break
     break;
        }
      }
    }

  }
  else{
    cout << endl << endl << "Exceeded" << endl;
  }
}

int main(){

  const int CAP = 14;
  int size = 10;

  int array[CAP] = {10, 20, 30, 40, 50, 60, 70, 80, 90 , 100};
  print(array, size);

  sorted_insert(array, CAP, size, 110);
  print(array, size);
  sorted_insert(array, CAP, size, 1);
  print(array, size);

  sorted_insert(array, CAP, size, 130);
  print(array, size);
  sorted_insert(array, CAP, size, 55);
  print(array, size);





  return 0;
}
