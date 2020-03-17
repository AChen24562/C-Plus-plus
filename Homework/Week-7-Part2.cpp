#include <iostream>
using namespace std;

int main(){

int correct = 6;
double guess;

cout << "Guess a Number" << endl
     << "----------------------" << endl
     << "Pick a integer between 1 to 10: ";

cin >> guess;

do{
    if(guess == (int)guess){
        if(guess >= 1 && guess <=10){
            if(guess == correct){
              break;
            }
            else{
              cout << endl << guess << " is not the corrent number. Try again" << endl
                   << "Pick an integer from 1 to 10: ";
              cin >> guess;
            }
        }
        else{
        cout << endl << "Invalid input. Out of range. Please re-enter"<< endl
             << "Pick an integer from 1 to 10: ";
        cin >> guess;
      }
    }
else{
cout << endl << "Invalid input. Number must be an integer. Please re-enter" <<
     endl << "Pick an integer between 1 to 10: ";
cin >> guess;
}


}while(true);
cout << endl << guess << " is the correct number!" <<endl << endl
     << "-----------------" << endl
     << "EXIT PROGRAM";


  return 0;
}
