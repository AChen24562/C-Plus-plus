#include <iostream>
using namespace std;

template<typename T>
void display(T value){
  cout << value <<endl;
}

int main(){
  display(12);
  display(12.4);
  display('A');
  display("Hello");



  return 0;
}
