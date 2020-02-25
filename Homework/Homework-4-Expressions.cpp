/*Alex Chen
Homework 4
Prof. Sun*/
#include <iostream>
using namespace std;

int main(){

// Bus program
  cout << "Transportation Center" << endl
  << "-------------------------------" << endl;
  // Amount of people per bus
  int bus_cap = 55;
  int passengers;
  cout << "How many passengers are there? ";
  cin >> passengers;
  //  Determining the amount of people per bus
  int buses = passengers/bus_cap;
  cout << endl << "There will be " << buses << " buses with "
       << bus_cap << " people on each bus." << endl;
  // Determining the amount of people will be in vans
  int remaining = passengers%bus_cap;
  cout << "With " << remaining << " riding in vans. Have a nice trip!"
       << endl << endl;


// Digit extraction problem
int digit;
cout << "Digit Extraction" << endl;
cout << "--------------------------------" << endl;
cout << "Enter a 3-Digit Integer: ";
cin >> digit;
cout << endl;
cout << digit % 10
     << endl << digit / 10 % 10
     << endl << digit / 100;








  return 0;
}
