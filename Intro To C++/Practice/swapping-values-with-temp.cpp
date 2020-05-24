// Weel2 storing data practice

#include <iostream>
using namespace std;

int main(){
  string str, str2;
  str = "1234";
  str2 = "4567";


  cout << "The String is: " << str << endl << endl;

  cout << str.at(0) << endl
    << str.at(1) << endl
    << str.at(2) << endl
    << str.at(3) << endl;


  char temp = str[0];
  str[0] = str[str.length()-1];
  str[str.length()-1] = temp;

  cout << str << endl;

  char temp2 = str2[0];
  str2[0] = str2[3];
  str2[3] = temp2;

  cout << str2 << endl;









  return 0;
}
