// WK 1 HomeWork Basic Console I/O
// Alex Chen
// Prof. Sun



#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  // Personal info (School)
  cout << "What school is this? ";
  string school;
  cin >> school;

  // Personal info (Course)
  cout << "What course are you taking? ";
  string  course;
  cout << "\t";
  cin >> course;

  // Personal info (name)
  cout << "What is your name? ";
  string name;
  cout << "\n";
  cin >> name;
  cout << endl;

  // Personal Info (display)
  cout << school << endl
    << "\t" << course << endl
    << "\t\t" << "Welcomes" << endl
    << "\t\t\t" << name << "!" << endl << endl;


  return 0;
}
