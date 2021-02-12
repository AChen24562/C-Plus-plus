#include <iostream>

using namespace std;
class Work{
private:
  string name;
  float paygrade;
  int hours;

public:
  Work(){
    name = "Unknown";
    paygrade = 0;
    hours = 0;
  }
    // Accessors
    string getName();
    float getPay();
    int getHours();

    // Mutators
    void setName(string n);
    void setPay(float pay);
    void setHours(int h);

    void display();

};

// Externally Defined
string Work::getName(){return name;}
float Work::getPay(){return paygrade;}
int Work::getHours(){return hours;}

void Work::setName(string n){name = n;}
void Work::setPay(float pay){paygrade = pay;}
void Work::setHours(int h){hours = h;}

void Work::display(){
  cout << "Name: " << name << endl;
  cout << "Pay: " << paygrade << endl;
  cout << "Hours: " << hours << endl;
}
// End of Externally defined

// Non Member Functions
float amountWeek(Work &w){
  float pay = w.getPay();
  int hours = w.getHours();
  return pay * hours;
}

int main(){
  Work w1{};
  w1.setName("Bill");
  w1.setPay(15.73);
  w1.setHours(20);

  w1.display();
  cout << endl << endl <<"Bill: $"<< amountWeek(w1);

  return 0;
}
