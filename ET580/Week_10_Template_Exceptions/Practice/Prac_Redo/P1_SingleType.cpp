#include <iostream>
using namespace std;

template<typename T>
void display(T value){
  cout << value <<endl;
}

int main(){
  display(12);
  display(1.3);
  display("Hello");




  return 0;
}
