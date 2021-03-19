#include <iostream>
using namespace std;

int counter = 0;
void fib(int num) {
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
     counter ++;
      z = x + y;
      x = y;
      y = z;
   }
   cout << x << endl << counter;
}

int main(){
fib(46);

  return 0;


}
