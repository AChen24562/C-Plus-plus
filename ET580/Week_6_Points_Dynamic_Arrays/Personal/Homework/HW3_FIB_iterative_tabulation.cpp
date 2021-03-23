#include <iostream>
using namespace std;

long int counter = 0;

long* fibonacci(int n){
  long *array = new long[n]{0, 1};
  for(int i =2; i <=n; i ++){
    counter ++;
    *(array+i) = *(array + i-1) + *(array +i-2);
  }
  return array;
}


int main(){
  const int n = 46;
  long *arr = fibonacci(n);

  cout << "Fib: " << *(arr+n) << endl;
  cout << "Counter: "<< counter <<endl;
  delete [] arr;



  return 0;
}
