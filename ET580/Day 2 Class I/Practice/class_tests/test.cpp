#include <iostream>

using namespace std;

class DayofYear{
public:
  void output();
  int month;
  int day;
};

int main(){
DayofYear today, birthday;
cout << "Enter today's date: \n";
cout << "Enter month: ";
cin >>today.month;

cout <<"Enter day: ";
cin >>today.day;

cout << endl << "Enter birthday: \n";
cout <<"Enter month: ";
cin >> birthday.month;
cout <<"Enter day: ";
cin >> birthday.day;

cout << endl <<"Today's date: ";
today.output();

cout << endl << "Your brithday: ";
birthday.output();
cout << endl << endl;

if (today.month == birthday.month && today.day == birthday.day){
  cout << "Happy Birthday!\n";
}

  return 0;

}
void DayofYear::output(){
  cout << endl <<month << "/" << day;
}
