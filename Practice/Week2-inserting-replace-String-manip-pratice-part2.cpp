#include <iostream>
using namespace std;

int main(){
  string str = "This isQCC!";
  cout << str << endl;

  cout <<str.insert(7, " ") << endl;
  cout <<str.replace(0, 1, "T") << endl;
  cout << str.erase(11, 1) << endl;
  cout << str.replace(8, 4, "The City University of New York") << endl;
  cout << str.append(".") << endl;







  return 0;
}
