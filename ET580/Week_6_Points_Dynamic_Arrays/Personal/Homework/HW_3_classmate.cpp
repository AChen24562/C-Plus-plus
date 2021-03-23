#include <iostream>
using namespace std;

// global var to keep track of iterations
long long counter = 0;

long fibonacci(int n) {

  long *fib = new long[n]{0,1}; // partially initialize array on heap

  for (int i=2; i<=n; ++i){
      ++counter;
      *(fib+i) = *(fib+i-1) + *(fib+i-2);  // store sum of previous 2 elements at current index
  }

  return *(fib+n);    // return last element
}

int main() {
    cout << endl;

    int n =46;


    cout << "\nFib: " << fibonacci(n) << "\nIterations: " << counter << "\n\n";
    cout << endl;
    return 0;
}
