#include <iostream>
using namespace std;

class Vehicle{
protected:
  string brand;

public:
  Vehicle():Vehicle("NoBrand"){}
  Vehicle(string b):brand(b){}

  virtual void display()const{
    cout << "Brand: " << brand <<endl;
  }

};

class Car: public Vehicle{

};

int main(){

  return 0;
}
