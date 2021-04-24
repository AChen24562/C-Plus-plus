#include <iostream>
using namespace std;

class Vehicle{
protected:
  string *brand;

public:
  Vehicle():Vehicle("NoBrand"){}
  Vehicle(string b):brand(new string (b)){}

  virtual void display()const{ // Virtual Function
    cout << "Brand: " << *brand <<endl;
  }
  // Virtual destructor
  virtual ~Vehicle(){
    cout << "Vehicle Delete" << endl;
    delete brand;
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
  }
  ~Car(){
    cout << "Car Delete" << endl;
    delete wheels;
  }
};

class Truck: public Vehicle{
private:
  int *twheels;
public:
  Truck(): Truck{"NoBrand", 0}{}
  Truck(string b, int tw):Vehicle(b), twheels(new int(tw)){}

  void display()const override{// Overide virtual function
    cout << "Truck Brand: " << *brand << " TWheels: " << *twheels << endl;
  }
  ~Truck(){
    delete twheels;
  }
};

int main(){

  Car c1{"Lexus", 4};
  Vehicle *v1 = &c1;
  v1->display();
  cout <<endl<< "Delete V1:" <<endl;
  delete v1;
  cout << endl;

  Vehicle *v2 = new Car{"Tesla", 4};
  v2->display();
  cout << endl << "Delete V2" << endl;
  delete v2;
  cout << endl;

/*
  Vehicle **v = new Vehicle*[4];
  v[0] = new Car{"Benz", 4};
  v[1] = new Truck{"Volvo", 18};
  v[2] = new Car{"Toyota", 4};
  v[3] = new Truck{"V3", 10};

  for(int i =0; i<4; i++){
    v[i]->display();
  }
*/
  return 0;
}
