#include <iostream>
using namespace std;

int counter =0;

long *fibonacci(long n){

  long *array = new long[n]{0, 1};
  for(int i =2; i <=n; i++){
    counter ++;
    *(array+i) = *(array +i -1) + *(array+i -2);
  }
  return array;
}

int main(){
  const long n = 30;
  //cout << "Fib: " << fibonacci(n);

  long *arr = fibonacci(n);
  cout << "Fib: " << arr[n] << endl;
  cout << "Counter: " << counter << endl;
  return 0;
}
