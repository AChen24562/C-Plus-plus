// WK 1 HomeWork Basic Console I/O
// Alex Chen
// Prof. Sun

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Start of Shoping Cart
  cout << "Shopping Cart" << endl
    << "-------------------------------------" << endl;

  // Start of items
  cout << left << setw(10) << "#" << setw(20) << "Item" << "Cost" << endl;
  cout << left << setw(10) << "1" << setw(20) << "Notebook" << "$5.69" << endl;
  cout << left << setw(10) << "5" << setw(20) << "2-Pocket Folders" << "$1.99" << endl;
  cout << left << setw(10) << "1 Dozen" << setw(20) << "Gel Pens" << "$8.29" << endl << endl;
  cout << setw(10) << "";

  // Display total
  cout << left  << setw(20) << "Subtotal: " << "$15.97";
  return 0;
}
