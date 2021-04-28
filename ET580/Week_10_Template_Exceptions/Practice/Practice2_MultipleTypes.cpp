#include <iostream>
using namespace std;

template<typename T, typename U>
void increment(T value, U value2){
  cout <<value << " + " << value2 << " = " << value + value2 <<endl;
}

int main(){
  increment(1, 1);
  increment(1, 3.1);
  increment(3.1, 1);
  increment(3.1, 3.1);




  return 0;
}
