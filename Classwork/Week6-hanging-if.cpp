// (c) S. Trowbridge & J. Sun
// WK5 - PE

#include <iostream>
using namespace std;

int main( ) {

    bool isRaining;
    int activity;

    cout << "Is it raining (1/0)? ";
    cin >> isRaining;
    cout << endl;

    //add statements in if-else statement
    if(isRaining == 1) {
      int choice;
      cout << "Please choose two activities: "
          << endl << "1) Watch T.V." << endl
          << "2) Do Homework." << endl;
          cin >> activity;

          if(activity == 1)
          cout << "You turn on the T.V.";

          else if(activity == 2)
          cout << "You Begin your homework";

          else{
            cout << "Try again";
          }
    }

    else {
      cout << "Possible activities: " << endl;
      cout << "1) Beach" << endl << "2) Tennis" << endl;
      cin >> activity;

        if (activity == 1){
          cout << "Going to the Beach";
        }

        else if (activity == 2){
          cout << "Playing Tennis";
        }

        else {
          cout << "Try again";
        }







    }

    cout << endl;
    return 0;
}
