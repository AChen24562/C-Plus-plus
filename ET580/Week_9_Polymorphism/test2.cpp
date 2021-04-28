#include <iostream>
using namespace std;

class Vehicle{
protected:
  string brand;

public:
  Vehicle():Vehicle("NoBrand"){}
  Vehicle(string b):brand(b){}

  virtual void display()=0;

};

class Car: public Vehicle{
private:
  int wheels;

public:
  Car():Car("NoBrand",0){}
  Car(string b, int w): Vehicle(b), wheels(w){}

  void display()override{
    cout << "Brand: " << brand << " Wheels: " <<wheels << endl;
  }
};

int main(){
  Car c1{"Luxus", 4};
  c1.display();

  Vehicle *v1 = &c1;
  v1->display();

  return 0;
}
