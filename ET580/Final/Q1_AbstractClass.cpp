#include <iostream>

class Employee{
private:
  std::string name;

public:
  Employee():Employee("NoName"){}
  Employee(std::string n): name(n){}

  virtual void output()const = 0;
};

int main(){




  return 0;
}
