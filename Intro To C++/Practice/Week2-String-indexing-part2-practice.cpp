#include <iostream>
using namespace std;
int main(){
  string t1 = "This is a test string";
  cout << t1 << endl << endl;



  cout << t1.substr(0, 4) << endl;
  cout << t1.substr(5, 2) << endl;
  cout << t1.substr(8, 1) << endl;
  cout << t1.substr(10,4) << endl;
  cout << t1.substr(15, 6) << endl;
}
