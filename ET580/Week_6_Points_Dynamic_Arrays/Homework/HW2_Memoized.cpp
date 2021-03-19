#include <iostream>
using namespace std;

long fibonacci(int n, long* a){
  if(n < 2){
    return *(a+n);
  }
  *(a+n) = fibonacci(n-1, a)+fibonacci(n-2, a);
  return *(a+n);
}

int main(){
  const int size = 10;
  long *array = new long[size] {0,1};


  for(int i = 2; i <size; i ++){
    *(array+i) = -1;
  }

  for(int i = 0; i <size; i ++){
    cout << *(array+i) <<" ";
  }

  cout << endl <<fibonacci(size, array);







  return 0;
}
