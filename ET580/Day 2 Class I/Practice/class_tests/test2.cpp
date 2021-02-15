#include <iostream>

using namespace std;


class DayofYear{
private:
  int month;
  int day;

public:
  void input();
  void output();

  // Mutators
  void set(int newMonth, int newDay);
  void set(int newMonth);

  // Accessors
  int getMonthNumber();
  int getDay();
};

int main(){
DayofYear today, bachBirthday;
cout << "Enter today's date: \n";
today.input();
cout << "Today's date is: ";
today.output();
cout << endl << endl;

bachBirthday.set(3, 21); // Sets Johann Sebastian's birthday
cout << "J. S. Bach's birthday is: ";
bachBirthday.output();
cout <<endl << endl;

if(today.getMonthNumber() == bachBirthday.getMonthNumber() && today.getDay() == bachBirthday.getDay()){
  cout << "Happy Bithday Johann Sebastian!\n";
}
else{
  cout << "Not Johann Sebastian's birthday";
}

  return 0;
}
// Externally Defined member functions
void DayofYear::set(int newMonth, int newDay){
  if(newMonth >= 1 && newMonth <=12){
    month = newMonth;
  }
  else{
    cout <<"Incorrect month.. leaving program";
    exit(1);
  }
  if(newDay >= 1  && newDay<= 31){
    day = newDay;
  }
  else{
    cout <<"Incorrect Day.. leaving program";
    exit(1);
  }

}

int DayofYear::getMonthNumber(){
  return month;
}

int DayofYear::getDay(){
  return day;
}

void DayofYear::input(){
  cout << "Enter the month as a number: ";
  cin >>month;
  cout <<"Enter the day of the month: ";
  cin >> day;
  set(month , day);
}

void DayofYear::output(){
  cout << endl <<month << "/" << day;
}
