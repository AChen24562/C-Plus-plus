#include <iostream>
using namespace std;

int main(){
  int *p = new int(5);
  cout << *p << endl;

  delete p; // Hanging pointer, must reassign, p currently points to nothing


  p = nullptr; // Assign to nullptr

  p = new int(5);


  return 0;
}
