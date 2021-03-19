#include <iostream>
using namespace std;

long long counter = 0; // Used to see how many recursive fib functions is called

long fibonacci(int n, long* a){
  counter ++; // Increment by one everytime it's run
    if(n < 2){ //Since we defined up to index 1, when index (n) is less than 2, just return
      return *(a+n);
    }
    else if(*(a+n-1) == -1){ // If index is blank calculate and store
      *(a+n-1) = fibonacci(n-1, a)+fibonacci(n-2, a);
    }

  return *(a+n-1);  // If not blank just return
}

int main(){
  const int size = 46;
  long *array = new long[size] {0,1}; // Partially filled pointer array


  for(int i = 2; i <size; i ++){ // Usually defaults to 0, but we want -1
    *(array+i) = -1;
  }

  for(int i = 0; i <size; i ++){  // Display pointer array, testing purposes
    cout << *(array+i) <<" ";
  }

  cout << endl <<"Fib: "<<fibonacci(size, array) << endl; // calculate fib sequence
  cout << "Couter: " << counter; // How many iterations
  cout << endl << *(array+size-1); // What is the last index, should be the fib sequence


  return 0;
}
