#include <iostream>
using namespace std;

int main(){
  string name, middle, day;

  cout << "Enter your first and last name: ";
  getline(cin, name);

  cout << "What is your middle initial? ";
  cin >> middle;

  cout << "Hello, " + name << " " + middle << "." << endl << endl;

  cout << "What day is it today? ";
  cin >> day;

  cout << "Today is, " << day << endl << endl;



}
