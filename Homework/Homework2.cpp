// Alex Chen
// Homework 2
// Prof. Sun

#include <iostream>
using namespace std;

int main(){
// definitions
  string first, last, name, update;
  first = "Alex";
  last = "Chen";
  name = first + " " + last;

// legnth of name output
  cout << name << endl;
  cout << "This name has " << name.length() << " characters" << endl;

// Middle initial out put
  update = name.insert(5, " S. ");
  cout << update << endl << endl;

  cout << "My initials are " << name[0] << "." << update[6] << "." << name[9];




  return 0;
}
