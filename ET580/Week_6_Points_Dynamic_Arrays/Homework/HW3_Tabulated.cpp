#include <iostream>
using namespace std;

long long counter =0; // Coutner for iterations

long fibonacci(const int n){
  long *array = new long[n] {0, 1}; // Create pointer array of size n

// Linear Time +1 every iteration
  for(int i =2; i <=n; i++){ // Start from array[2]
    ++counter;
    *(array+i) = *(array + i-1) + *(array + i-2); // array[2] =  array[1]+ array[0]
  }
  return *(array+n); //return array[n], last index of array
}

int main(){
  const int size = 46;
  cout << endl;

  cout <<"Fib: " << fibonacci(size) << endl;
  cout << "Counter: " <<counter << endl;

  return 0;
}
