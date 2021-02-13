#include <iostream>

using namespace std;
class Work{
private:
  string name;
  float pay;
  int hours;
  float WeeklyPay(int hours, float pay){
    return hours *pay;
  }

public:
  // Constructor
  Work(){
    name ="Unknown";
    pay = 0;
    hours = 0;
  }
  void setName(string n){name = n;};
  void setPay(float p){pay = p;}
  void setHours(int h){hours = h;}

  string getName() {return name;}
  float getPay(){return pay;}
  int getHours(){return hours;}

  float getWeekPay(){
    return WeeklyPay(hours, pay);
  }
  
};
int main(){
  Work w1{};
  w1.setName("Jill");
  w1.setPay(21.50);
  w1.setHours(5);

  cout << w1.getWeekPay();

  return 0;


}
