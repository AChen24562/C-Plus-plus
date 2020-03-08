// Alex Chen
// Prof. Sun
// Homework 6 Part2

#include <iostream>
using namespace std;

int main(){
  float burger = 5.95;
  float chicken = 6.95;
  float tuna = 7.95;
  double amount =0;
  string choice;

do{
    cout << "Lunch Menu" << endl
         << "----------------------------" << endl << endl;
    cout << "Select an item from the menu below: " <<endl
         << "(B) Burger with French Fries - $5.95 " <<endl
         << "(C) Chicken over Rice - $6.95"<< endl
         << "(T) Tuna Sandwhich - $7.95"<<endl
         << "(E) Exit" <<endl
         << "Your lunch item is: ";
    cin >> choice;

    while(choice == "b" || choice == "B" || choice == "c" || choice == "C"
  || choice == "t" || choice == "T"){
    if(choice == "B" || choice == "b"){
      cout << endl <<"One order of Burger with Fries is $5.95" <<endl <<endl;
      amount += 5.95;

      cout << "Select an item from the menu below: " <<endl
           << "(B) Burger with French Fries - $5.95 " <<endl
           << "(C) Chicken over Rice - $6.95"<< endl
           << "(T) Tuna Sandwhich - $7.95"<<endl
           << "(E) Exit" <<endl
           << "Your lunch item is: ";
      cin >> choice;

}

      if(choice == "C" || choice == "c"){
        cout << endl <<"One order of Chicken over Rice is $6.95" << endl <<endl;
        amount += 6.95;

        cout << "Select an item from the menu below: " <<endl
             << "(B) Burger with French Fries - $5.95 " <<endl
             << "(C) Chicken over Rice - $6.95"<< endl
             << "(T) Tuna Sandwhich - $7.95"<<endl
             << "(E) Exit" <<endl
             << "Your lunch item is: ";
        cin >> choice;
}
// end of choice C
      if(choice == "T" || choice == "t"){




      }




  }















}
while(true);












  return 0;
}
