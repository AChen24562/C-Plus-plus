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
  cout << update << endl;

// All initial output
  cout << "My initials are " << name[0] << "." << update[6] << "." << name[9] << "." << endl << endl;


// Part 2 of homework
// Weather input
  string weather, temp;
  cout << "Please describe the weather today. ";
  getline(cin, weather);
  cout << endl;

  cout << "What is the temperature today? ";
  cin >> temp;
  cout << "Today's temperature is " + temp + "ºF and is " + weather + ". Have a nice day!"
    << endl;

  return 0;
}
