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

void addEmp(Work array[], const int CAP, int &size, string n, float pay, int h){
  if(size < CAP){
    Work w{};
    w.setName(n);
    w.setPay(pay);
    w.setHours(h);
    array[size] = w;
    size ++;
  }
}

void printArr(Work array[], const int size){
  for(int i = 0; i < size; i++){
    cout << "Name: " << array[i].getName() << endl;
    cout <<"Pay: "<<array[i].getPay() << endl;
    cout <<"Hours: " << array[i].getHours()<<endl;
    cout <<"Weekly Pay: $"<<amountWeek(array[i])<<endl <<endl;
  }
}

int main(){
  /*
  Work w1{};
  w1.setName("Bill");
  w1.setPay(15.73);
  w1.setHours(20);

  w1.display();
  cout << endl << endl <<"Bill: $"<< amountWeek(w1);
*/
  const int CAP = 10;
  int size = 0;
  Work array[CAP];

  addEmp(array, CAP, size, "Bill", 15.50, 20);
  addEmp(array, CAP, size, "Jim", 20.10, 20);
  printArr(array, size);

  
  return 0;
}
