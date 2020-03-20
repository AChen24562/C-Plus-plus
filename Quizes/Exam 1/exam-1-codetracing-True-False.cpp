#include <iostream>
using namespace std;

int main(){
  int x = 8, y = 5, z =1;
  int yes_no;
// True
  yes_no = !(x <= y && x <= z);
  cout << yes_no << endl;
//False
  yes_no = !yes_no;
  cout << yes_no << endl;
// True
  yes_no = (0 > 5 || y != z);
  cout << yes_no << endl;
// True
  yes_no = (x/y ==z);
  cout << yes_no << endl;

  yes_no = (y % x !=z && !z);
  cout << yes_no << endl;


  return 0;
}
