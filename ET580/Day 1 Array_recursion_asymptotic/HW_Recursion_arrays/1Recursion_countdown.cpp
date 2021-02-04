#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

// Take an input
// Base case of input == 1, output 1
// Recursive Action: print current input and function(input - 1), until input is 1

// Trace
/* Input into function 10
10 does not equal 1, therefore, print current input stored, called the same function
but with the input -1.
Continue until input is 1
*/
void countdown(int num){
  if(num == 1){
    cout << num;
    return;
  }
  else{
    cout << num << " ";
    countdown(num - 1);
  }
}


int main(){
  countdown(10);


  return 0;



}
