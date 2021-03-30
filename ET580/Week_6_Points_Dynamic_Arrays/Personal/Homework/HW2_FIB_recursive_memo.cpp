#include <iostream>
using namespace std;

int counter = 0;

long fibonacci(int n, long *array){
  counter ++;
  if(n < 2){
    return *(array +n);
  }
  else if( *(array+n-1) == -1){
    *(array+n-1) = fibonacci(n-1, array) + fibonacci(n-2, array);
  }
  return *(array+n-1);
}

int main(){
  const int n = 10;
  long *array = new long[n]{0, 1}; // create array

  for(int i =2; i <n; i ++){
    *(array +i) = -1;
  }
  for(int i =0; i <n; i++){
    cout << *(array+i) << " ";
  }
  cout << endl;

  cout << "Fib: "<<fibonacci(n, array) << endl; // populate array, and print last index
  cout << "Counter: " << counter << endl << endl;
  cout << endl;

  return 0;
}
