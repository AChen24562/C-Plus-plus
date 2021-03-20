#include <iostream>
using namespace std;

int counter = 0;

long fibonacci(int n, long *array){
  counter ++;
  if(n < 2){
    return *(array +n);
  }
  else if( *(array+n-1) == -1 ){
    *(array+n-1) = fibonacci(n-1, array) + fibonacci(n -2, array);
  }
  return *(array+n-1);
}


int main(){
  const int size = 47;
  long *array = new long[size]{0,1};

  for(int i = 2; i <size; i ++){
    *(array+i) = -1;
  }

  for(int i = 0; i <size; i ++){
    cout << *(array+i) << " " ;
  }
  cout << endl << endl;
  cout << "Fib: "<<fibonacci(size, array)<<endl;
  cout << "Counter: " << counter;
  return 0;

}
