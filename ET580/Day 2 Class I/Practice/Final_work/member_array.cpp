#include <iostream>

using namespace std;

const int CAP =5;
int size =0;
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


  float hourlyPay[CAP]; // Array
  string nameEmp[CAP]; // Name array
  int empHours[CAP];

  // Mutators
  void setName(string n){name = n;};
  void setPay(float p){pay = p;}
  void setHours(int h){hours = h;}
  // Acessors
  string getName() {return name;}
  float getPay(){return pay;}
  int getHours(){return hours;}


  void fillArr(float p, string n, int h);
  void printArr();

  float getWeekPay(){ // Wrapper Function
    return WeeklyPay(hours, pay);
  }

}; //End of Class
// Defined Externally
void Work::fillArr(float p, string n, int h){
  hourlyPay[size] = p;
  nameEmp[size]=n;
  empHours[size] = h;
  size++;
}

void Work::printArr(){
  for(int i =0; i <size;i++){
    cout << nameEmp[i]<<": "<< hourlyPay[i] << " Hours: "
      << empHours[i] << " Pay: $" <<(hourlyPay[i]*empHours[i])<<endl;
  }
}

int main(){
  Work w1{};

  w1.fillArr(12.50, "alvin", 5);
  w1.fillArr(14.25, "bill", 12);
  w1.printArr();




  return 0;
}
