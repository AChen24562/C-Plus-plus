#include <iostream>
using namespace std;

template<typename T, typename U>
void increment(T value, U secondV){
  cout << value << " + " << secondV << " = " << value + secondV <<endl;
}

int main(){
  increment(1, 3);
  increment(3, 5.4);
  increment(5.4, 3);
  increment(2.2, 2.2);


  return 0;
}
