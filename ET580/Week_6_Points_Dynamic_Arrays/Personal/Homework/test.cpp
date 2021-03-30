
#include <iostream>
using namespace std;


long long counter = 0;               // global count variable to track # of recursive function calls (has global scope)

long fibonacci(int n, long *a){
    counter++;                       // increment counter for every function call
    if(n<2){                         // base case, return n since fib(0) is 0 and fib(1) is 1
      return n;
    }
    else if(*(a+n-1) == -1){                           // if current index does not have a value,
      *(a+n-1) = fibonacci(n-1, a)+fibonacci(n-2, a);  // calculate the current value and store it (only do this ONCE per index)
    }
    return *(a+n-1);          // lookup the stored value at index n and return it
                            // this will only happen if *(a+n) is not -1,
                            // in other words if a value was already calculated for a[n]
}

int main(){
  const int n = 10;              // the maximum value of n for this calculation
  long *a = new long[n]{0, 1};      // dynamic array of large integers (longs)

  for(int i=2; i<n; i ++){    // default array to all -1 values, -1 will represent a value that has not been calculated yet
    *(a+i) = -1;
  }

  for(int i=0; i<n; i ++){    // display the dynamic array
    cout << *(a+i) <<" ";
  }

  cout << endl <<"Fib: "<<fibonacci(n, a) << endl;    // calculate fib sequence
  cout << "Couter: " << counter;                      // number of iterations
  cout << endl << *(a+n-1);                           // the last stored value in the array

  return 0;
}
