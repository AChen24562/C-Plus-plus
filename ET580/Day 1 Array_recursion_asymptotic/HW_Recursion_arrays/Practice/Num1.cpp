#include <iostream>

using namespace std;

/* recurse_print(10) print 10
    ...
      ...
      recurse_print(1) print 1
    recurse_print(2)
  ...
recurse_print(10)
*/
// Linear Recursive Function
void recurse_print(int n){
  if(n ==1){
    cout << n << " ";
    return;
  }
  else{
    cout << n << " ";
    recurse_print(n -1);
  }
}




int main(){

  int n = 10;
  recurse_print(n);


    return 0;

}
