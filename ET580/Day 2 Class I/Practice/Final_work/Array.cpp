#include <iostream>

using namespace std;
class Work{
private:
  string name;
  float pay;
  int hours;
  float WeeklyPay(int hours, float pay){ // Wrapped calls new copies
    return hours *pay;
  }

public:
  // Constructor
  Work(){
    name ="Unknown";
    pay = 0;
    hours = 0;
  }
  // Mutators
  void setName(string n){name = n;};
  void setPay(float p){pay = p;}
  void setHours(int h){hours = h;}
  // Acessors
  string getName() {return name;}
  float getPay(){return pay;}
  int getHours(){return hours;}



  float getWeekPay(){ // Wrapper Function
    return WeeklyPay(hours, pay);
  }

}; //End of Class


// Non-member:
float amountWeek(Work &w){
  float pay = w.getPay();
  int hours = w.getHours();
  return pay * hours;
}
void setArray(Work array[], const int CAP, int&size, string n, float pay, int h){
  if(size < CAP){
    Work w{};
    w.setName(n);
    w.setPay(pay);
    w.setHours(h);
    array[size] = w;
    size ++;
  }
}

void showArray(Work array[], const int size){
  for(int i = 0; i < size; i++){
    cout << endl <<"Name: " << array[i].getName() << endl;
    cout <<"Pay: "<<array[i].getPay() << endl;
    cout <<"Hours: " << array[i].getHours()<<endl;
    cout <<"Weekly Pay: $"<<array[i].getWeekPay() <<endl;
  }
}
int main(){
  Work w1{};
  w1.setName("Jill");
  w1.setPay(21.50);
  w1.setHours(5);

  cout << w1.getWeekPay();


  const int CAP =10;
  int size =0;
  Work array[CAP];
  setArray(array, CAP, size, "Bill", 15.50, 20);
  setArray(array, CAP, size, "Jim", 20.10, 20);
  showArray(array, size);
  return 0;


}
