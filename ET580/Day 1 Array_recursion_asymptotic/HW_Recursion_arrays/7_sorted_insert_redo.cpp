#include <iostream>

using namespace std;

// Quadratic Time
void print(int array[], const int size){
  for(int i =0; i<size; i++){
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

  const int CAP = 13;
  int size = 10;

  int array[CAP] = {10, 20, 30, 40, 50,60,70, 80,90,100};
  print(array, size);

  cout << endl;
  sorted_insert(array, CAP, size, 105);
  print(array, size);
  cout <<endl;
  sorted_insert(array, CAP, size, 1);
  print(array, size);
  cout <<endl;
  sorted_insert(array, CAP, size, 25);
  print(array, size);
  cout <<endl;
  sorted_insert(array, CAP, size, 26);
  print(array, size);
  cout <<endl;
  sorted_insert(array, CAP, size, 51);
  print(array, size);

    return 0;

}
