#include <iostream>
using namespace std;

int main(){
  string text;

  cout << "Enter some text: ";
  cin >> text;

  cout << "[0] " << text[0] << endl;
  cout << "[1] " << text[1] << endl;
  cout << "[2] " << text[2] << endl;
  cout << "[3] " << text[3] << endl;
  cout << "[4] " << text[4] << endl;
  cout << "[5] " << text[5] << endl;

  // Safe method

  cout << text.at(0) << endl;
  cout << text.at(1) << endl;
  cout << text.at(2) << endl;
  cout << text.at(3) << endl;
  cout << text.at(4) << endl;
  cout << text.at(5) << endl;
  return 0;

}
