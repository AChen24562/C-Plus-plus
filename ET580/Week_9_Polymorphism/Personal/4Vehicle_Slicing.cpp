#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Vehicle{
protected:
  string brand;

public:
  Vehicle():Vehicle("NoBrand"){}
  Vehicle(string b):brand(b){}

  virtual void display()const{ // Virtual Function
    cout << "Brand: " << brand <<endl;
  }


};

class Car: public Vehicle{
private:
  int wheels;

public:
  Car():Car("NoBrand",0){}
  Car(string b, int w): Vehicle(b), wheels(w){}

  void display()const override{ // Overide virtual function
    cout << "Car Brand: " << brand << " Wheels: " <<wheels << endl;
  }

};

int main(){
  Vehicle v;
  Car c{"Benz", 4};

  v=c;
  cout << "Incorrect Slicing" <<endl;
  v.display();
  c.display();

  cout <<endl<< "Correct Slicing: " << endl;
  Vehicle *v1;
  Car *c1 = new Car{"Lexus", 4};
  v1 = c1;
  v1->display();
  c1->display();




  return 0;

}
