// Alex Chen
// Prof. Sun
// Homework 6 Part2

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  float burger = 5.95;
  float chicken = 6.95;
  float tuna = 7.95;
  double amount =0;
  string choice;
  double items = 0;


    cout << "Lunch Menu" << endl
         << "----------------------------" << endl << endl;
    cout << "Select an item from the menu below: " <<endl
         << "(B) Burger with French Fries - $5.95 " <<endl
         << "(C) Chicken over Rice - $6.95"<< endl
         << "(T) Tuna Sandwhich - $7.95"<<endl
         << "(E) Exit" <<endl
         << "Your lunch item is: ";
    cin >> choice;
do{
  if(choice == "B" || choice == "b" || choice == "C" || choice == "c"
|| choice == "T" || choice == "t"){
    break;
}
  else
  cout << endl << "------------------" << endl
       << "Invalid Choice, Please enter another lunch item. ";
  cin >> choice;
  cout << "------------------" << endl;

}
while(true);



do{
  do{
    while(choice == "B" || choice == "b" || choice == "C" || choice == "c"
          || choice == "T" || choice == "t"){
    if(choice == "B" || choice == "b"){
      cout << endl << "------------------" << endl << "One order of Burger with Fries is $5.95" <<endl
      << "------------------"<<endl;
      amount += 5.95;
      items ++;

      cout << "Select an item from the menu below: " <<endl
           << "(B) Burger with French Fries - $5.95 " <<endl
           << "(C) Chicken over Rice - $6.95"<< endl
           << "(T) Tuna Sandwhich - $7.95"<<endl
           << "(E) Exit" <<endl
           << "Your lunch item is: ";
      cin >> choice;
// end of choice b
}

      if(choice == "C" || choice == "c"){
        cout << endl << "------------------"<<endl <<
        "One order of Chicken over Rice is $6.95" << endl
        << "------------------"<<endl;
        amount += 6.95;
        items ++;


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
        cout << endl << "------------------"<<endl <<
         "One Tuna Sandwhich is $7.95." <<endl
        << "------------------" <<endl;
        amount += 7.95;
        items ++;


        cout << "Select an item from the menu below: " <<endl
             << "(B) Burger with French Fries - $5.95 " <<endl
             << "(C) Chicken over Rice - $6.95"<< endl
             << "(T) Tuna Sandwhich - $7.95"<<endl
             << "(E) Exit" <<endl
             << "Your lunch item is: ";
        cin >> choice;
// end of choice T
      }
      if(choice == "E" || choice =="e"){
        cout << endl << "------------------"<<endl <<
         "EXIT LUNCH MENU." << endl << endl
        << "---------------------------------------" << endl
        << "You ordered " << items << " lunch item(s)." << endl
        << "Please pay $" << setprecision(2) << fixed << amount <<"." << endl
        <<"Enjoy your lunch!" <<endl <<endl
        << "----------------------------" << endl
        << "EXIT PROGRAM.";

        return 0;
      }



// end of choice e


  }
}while(false);
cout << endl << "------------------" << endl
     << "Invalid Choice, Please enter another lunch item. ";
cin >> choice;
cout << "------------------" << endl;
    if(choice == "E" || choice =="e"){
          cout << endl << "------------------"<<endl <<
          "EXIT LUNCH MENU." << endl << endl
          << "---------------------------------------" << endl
          << "You ordered " << items << " lunch item(s)." << endl
          << "Please pay $" << setprecision(2) << fixed << amount <<"." << endl
          <<"Enjoy your lunch!" <<endl <<endl
          << "----------------------------" << endl
          << "EXIT PROGRAM.";

          return 0;
        }
}while(true);

return 0;
}
