#include <iostream>

using namespace std;

class Work{
private:
  string name;
  float pay;
  int hours;

public:
  Work(){
    name = "Unknown";
    pay = 0;
    hours = 0;
  }
  // Mutators
  void setName(string n);
  void setPay(float p);
  void setHours(int h);
  // Acessors
  string getName();
  float getPay();
  int getHours();
};

// Externally Defined
void Work::setName(string n){name = n;}
void Work::setPay(float p){pay =p;}
void Work::setHours(int h){hours = h;}

string Work::getName(){return name;}
float Work::getPay(){return pay;}
int Work::getHours(){return hours;}
// End of Externally Defined

// Non Member Function
void display(Work &w){
  cout << w.getName() <<": $"<<w.getPay()
      << " Hours: " <<w.getHours() << endl;

}

void fillArr(Work array[], const int CAP, int &size, string n , int p, int h){
  if(size < CAP){
    Work w{};
    w.setName(n);
    w.setPay(p);
    w.setHours(h);
    array[size] = w;
    size++;
  }
}

void displayArr(Work array[], const int size){
  for(int i =0; i <size; i++){
    cout << array[i].getName()<< ": $" << array[i].getPay()
      << array[i].getHours();
  }
  cout << endl;
}

int main(){
  Work w1{};
  display(w1);
  w1.setName("Alvin");
  w1.setPay(20);
  w1.setHours(2);

  display(w1);

  const int CAP = 10;
  int size=0;
  Work array[CAP];
  fillArr(array, CAP, size, "Jeff", 20, 5);
  displayArr(array, size);
  return 0;

}
