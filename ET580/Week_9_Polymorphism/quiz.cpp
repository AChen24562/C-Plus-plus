#include <iostream>
using namespace std;

class Vehicle{
protected:
  string modelNo;

public:
  Vehicle(): Vehicle("NoModel"){}
  Vehicle(string m): modelNo(m){}

  virtual void print()const=0;
};

class Train: public Vehicle{
private:
  int speed;
public:
  Train(): Train("NoModel", 0){}
  Train(string m, int s): Vehicle(m), speed(s){}

  void print()const override{
    cout << "Model: " << modelNo << " Speed mph: " << speed;
  }
};

int main(){
  Train t1{"MTA1231", 45};
  Vehicle *v1 = &t1;

  t1.print();
  cout <<endl;
  v1->print();




  return 0;
}
