#include <iostream>
using namespace std;

int main(){

int a =1, b=2;
cout << a << " " << b<< endl << endl;

// True
if(a<=b) {
  // add after
  b++;
}
// a = 1 and b = 3
cout << a << " " << b << endl << endl;



if (a%b==0){
  // false
  a = ++b;
} else {
  // assign a to b and add one
  b = a++;
}
// a = 1 and b = 2
cout << a << " " << b << endl << endl;

b*=a;
cout << a << " " << b << endl << endl;


  return 0;
}
