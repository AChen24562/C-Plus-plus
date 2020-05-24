#include <iostream>
using namespace std;

int main(){
  char c;
  cout << "Please enter an uppercase character: ";
  cin >> c;

  int ascii = c;
  cout << "ASCII value of \"" << c << "\" = " << ascii << endl;
  cout << "Lowercase Equivalent = " << (c += 32) << endl;

// # 4 dividing ints and having a double
int a = 10, b = 3;
cout << static_cast<double>(a)/ static_cast<double>(b) << endl;

string greeting = "Hello Wednesday";
cout << greeting.at(9) << endl;






  return 0;
}
