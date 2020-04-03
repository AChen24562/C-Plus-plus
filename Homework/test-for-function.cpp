//Alex Chen
//Prof. Sun
// Week 8 part 1 Ohm's Law

#include <iostream>
#include <iomanip>
using namespace std;

double ohmsLaw(double v, double r);

bool isValid(int v, int r){
  return(v > 0 && v < 50);
}


int main(){

int volt;
int ohm;
int counter;

cout << "Enter the initial voltage <in volt>: ";
cin >> volt;
cout << "Enter the resistance <in ohm>: ";
cin >> ohm;
cout << "Enter the voltage incremental value <In Volt>: ";
cin >> counter;

do{
  if(isValid(volt, ohm)){
    break;
  }
  else
    cout << endl<< "Invalid input(s). Please re-enter." << endl << endl;
    cout << "Enter the initial voltage <in volt>: ";
    cin >> volt;
    cout << "Enter the resistance <in ohm>: ";
    cin >> ohm;
    cout << "Enter the voltage incremental value <In Volt>: ";
    cin >> counter;
}while(true);

cout << endl << left << setw(20) << "Voltage <Volt>" << setw(30) << "Resistance <Ohm>"
     << "Current <Amp>" << endl;
cout << left << setw(20) << "-------------" << setw(30) << "--------------------"
         << "---------------" << endl ;

while(volt <=50){
      cout << left << setw(20) << volt << setw(30) << ohm ;
      ohmsLaw(volt, ohm);
      cout << endl;
      (volt += counter);
}



  return 0;
}


// Functions
double ohmsLaw(double v, double r){
  double amp = v/r;
  cout << setprecision(2) << fixed << amp;
}



/*double v =25;
double o =10;
double a = v/o;
cout << setprecision(2) << fixed << a;*/
