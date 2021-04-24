#include <iostream>
using namespace std;

class Vehicle{
protected:
  string *brand;

public:
  Vehicle():Vehicle("NoBrand"){}
  Vehicle(string b):brand(new string(b)){}

  virtual void display()const{ // Virtual Function
    cout << "Brand: " << *brand <<endl;
    cout << "Brand: " << brand <<endl;
  }

Vehicle(const Vehicle &v){
  brand = new string(*(v.brand));
}

Vehicle& operator=(const Vehicle &v){
  if(this != &v){
    *(brand) = *(v.brand);
  }
  return *this;
}
};

class Car: public Vehicle{
private:
  int *wheels;

public:
  Car():Car("NoBrand",0){}
  Car(string b, int w): Vehicle(b), wheels(new int(w)){}

  void display()const override{ // Overide virtual function
    cout << "Car Brand: " << *brand << " Wheels: " <<*wheels << endl;
    cout << "Car Brand: " << brand << " Wheels: " <<wheels << endl;
  }
  Car(const Car &c):
    Vehicle(c),
    wheels(new int(*(c.wheels))){}


  Car& operator=(const Car &c){
    if(this != &c){
      Vehicle::operator=(c);
      *(wheels) = *(c.wheels);
    }
    return *this;
  }

};

int main(){

  cout <<endl<< "Correct Slicing: " << endl;
  Vehicle *v1;
  Car *c1 = new Car{"Lexus", 4};
  v1 = c1;
  v1->display();
  c1->display();




  return 0;

}
