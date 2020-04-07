#include <iostream>
using namespace std;


// PE 2
void intInput(int& x, int& y){
   cout << "Enter two digits seperated by a space: ";
   cin >> x >> y;
   cout << endl;
}

void myletter(int x, int y){
  if(x > y)
    cout << "The letter that is returned is 'B'!";
  else
    cout << "The letter that is returned is 'S'!";
}
int main(){

//PE2
int x ,y;
  intInput(x, y);
  cout << endl << endl;
  myletter(x, y);

  return 0;
}
