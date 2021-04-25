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
private:
  int wheels;

public:
  Car():Car("NoBrand",0){}
  Car(string b, int w): Vehicle(b), wheels(w){}

  void display()const override{
    cout << "Car Brand: " << brand << " Wheels: " <<wheels << endl;
  }
};

class Truck: public Vehicle{
private:
  int twheels;
public:
  Truck(): Truck{"NoBrand", 0}{}
  Truck(string b, int tw):Vehicle(b), twheels(tw){}

  void display()const override{
    cout << "Truck Brand: " << brand << " TWheels: " << twheels << endl;
  }
};

int main(){
  Car c1{"Luxus", 4};
  c1.display();

  Vehicle *v1 = &c1;
  v1->display();
  cout << endl;

  Vehicle **v = new Vehicle*[4];
  v[0] = new Car{"Benz", 4};
  v[1] = new Truck{"Volvo", 18};
  v[2] = new Car{"Toyota", 4};
  v[3] = new Truck{"V3", 10};

  for(int i =0; i<4; i++){
    v[i]->display();
  }

  return 0;
}
