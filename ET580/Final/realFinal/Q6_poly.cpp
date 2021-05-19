#include <iostream>

class Vehicle{
protected:
  int speed;
public:
  Vehicle():Vehicle(0){}
  Vehicle(int s): speed(s){}

  virtual void print()const{
    std::cout << "Speed of Vehicle: " << speed <<std::endl;
  }
};

class Train:public Vehicle{
private:
  std::string purpose;

public:
  Train(): Train("NoPurpose", 0){}
  Train(std::string p, int s): purpose(p), Vehicle(s){}

  void print()const override{std::cout<< "Train's speed " << speed << " Train's purpose: " << purpose << std::endl;}

};

int main(){
  Vehicle v1{20};
  v1.print();

  Train t1{"Commute", 50};
  t1.print();



  return 0;
}
