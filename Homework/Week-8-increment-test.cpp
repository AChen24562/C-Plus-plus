#include <iostream>
#include <iomanip>
using namespace std;


int main(){

  double volt;
  double ohm;
  int counter;


  cout << "Enter the initial voltage <in volt>: ";
  cin >> volt;
  cout << "Enter the resistance <in ohm>: ";
  cin >> ohm;
  cout << "Enter a voltage increment: ";
  cin >> counter;
  cout << "Volt \t Resistance \t Current" << endl;

  while(volt <= 50){
  double amp = volt/ohm;

  cout << endl << volt << "\t" << ohm << "\t\t" << setprecision(2) << fixed << amp;
  (volt += counter);
}


  return 0;
}
