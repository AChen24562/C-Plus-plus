#include <iostream>
#include <iomanip>
using namespace std;


int main(){


cout << "Shopping List"
     << endl <<"--------------------------" << endl;

cout << left << setw(20) << "Item" << setw(20) << "Quantity" << "Amount" << endl;
cout << left << setw(20) << "70% Alcohol" << setw(20) << "2" << "$10.00" << endl;
cout << left << setw(20) << "Water" << setw(20) << "10" << "$40.00";


  return 0;
}
