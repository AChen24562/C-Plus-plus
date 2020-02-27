#include <iostream>
using namespace std;

int main(){
  char c;
  cout << "Please enter an uppercase character: ";
  cin >> c;

  int ascii = c;
  cout << "ASCII value of \"" << c << "\" = " << ascii << endl;
  cout << "Lowercase Equivalent = " << (c += 32) << endl;








  return 0;
}
