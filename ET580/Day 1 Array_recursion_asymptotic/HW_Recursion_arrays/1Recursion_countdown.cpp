#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

// Linear Time Function

// Steps:
// Take an input
// Base case: of input == 1, output 1
// Recursive Action: print current input and function(input - 1), until input is 1

// Trace
/* Input into function 10
10 does not equal 1, therefore, print current input stored, called the same function
but with the input -1.
Continue until input is 1
*/

/* countDown(5) print 5                  recursive process begins
  countDown(4) print 4
    countDown(3) print 3
      countDown(2) print 2
        countDown(1) print 1           base case reached (recursive process ends)
      countDown(2) return
    countDown(3) return
  countDown(4) return
countDown(5) return to main
*/
// Linear Recursive Function
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
  countdown(5);


  return 0;



}
