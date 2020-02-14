#include <iostream>
using namespace std;

int main(){
  string str;


  cout << "Enter a string: ";
  cin >> str;
  cout << str << endl << endl;

  cout << str.at(0) << endl;
  cout << str.at(1) << endl;
  cout << str.at(2) << endl;
  cout << str.at(3) << endl;
  cout << str.at(4) << endl << endl;

  //char temp = str[0];
  //str[0] = str[4];
  //str[4] = temp;



 // -1
 char temp = str[0];
 str[0] = str[str.length()-1];
 str[str.length()-1] = temp;

 cout << str << endl << endl;

  return 0;

}
