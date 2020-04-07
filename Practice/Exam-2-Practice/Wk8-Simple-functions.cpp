#include <iostream>
using namespace std;

// PE 1
void greet(){
  cout << "Hello World!";
}
void exit(){
  cout << "Goodbye, Exiting program!";
}
// PE 2
void intInput(int& x, int& y){
   int x, y;
   cout << "Enter two digits seperated by a space: ";
   cin >> x >> y;
   cout << endl;
}
char myletter(int x, int y){
  if(x > y)
    cout << "The letter that is returned is 'B'!";
  else
    cout << "The letter that is returned is 'S'!";
}
int main(){
// PE 1
  greet();
  cout << endl;
  exit();
  cout << endl << endl;
//PE2
int x ,y;
  intInput(x, y);
  myletter(x, y)

  return 0;
}
