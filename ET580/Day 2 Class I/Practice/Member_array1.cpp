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
  void setPay(float p){pay = p;};
  void setHours(int h){hours = h;}

  string getName() {return name;}
  float getPay(){return pay;}
  int getHours(){return hours;}

  float getWeekPay(){
    return WeeklyPay(hours, pay);
  }

};
void setArray(Work array[], const int CAP, int &size,string n, float p, int h){
  Work w{};
  w.setName(n);
  w.setPay(p);
  w.setHours(h);
  array[size] = w;
  size++;
}

void viewArray(Work array[], const int size){
  for(int i =0; i <size; i++){
    cout << array[i].getName();
    cout <<" Pay: " << array[i].getPay();
    cout <<" Hours: " << array[i].getHours() << endl;
  }
}

void viewPay(Work array[], const int size){
  for(int i =0; i <size; i++){
    if(array[i].getName() == "Bill"){
      cout << "Bill's Pay: " << array[i].getWeekPay();
      break;
    }
  }
}


int main(){
  Work w1{};
  const int CAP = 10;
  int size = 0;

  Work array[CAP];
  setArray(array,CAP, size, "Bill", 25, 10);
  setArray(array,CAP, size, "Jim", 20, 11);
  setArray(array,CAP, size, "Jeff", 21, 12);

  viewArray(array, size);
  cout << endl;
  viewPay(array, size);
  return 0;


}
