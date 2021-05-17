#include <iostream>


class Employee{
protected:
  std::string field;
public:
  Employee():Employee("NoField"){}
  Employee(std:: string f): field(f){}

  virtual void output()const{
    std::cout<< "Field: " << field  << std::endl;
  }
};

class Professor: public Employee{
private:
  std::string *department;
public:
  Professor():Professor("NoDepartment", ""){}
  Professor(std::string dep, std::string f): department(new std::string(dep)), Employee(f){}

  void output()const override {
    std::cout << "Department: " << *department << " in " << field << std::endl;
  }
  // Big Three
  // Copy
  Professor(const Professor &p):
    Employee(p),
    department(new std::string(*(p.department))){}
  // assignment
  Professor &operator=(const Professor &p){
    if(this != &p){
      Employee::operator=(p);
      *department = *(p.department);
    }
    return *this;
  }
  // destructor
  ~Professor(){
    delete department;
  }
};

int main(){
  Professor p1{"Math", "Prime Number Theory"};
  p1.output();

  // slicing
  Employee e2;
  Professor p2{"Physics", "Quantum Mech."};
  std:: cout << std:: endl << "Wrong Method: " << std::endl;
  e2 = p2;
  std::cout << "Employee: " ;
  e2.output();
  std:: cout << "Prof: ";
  p2.output();

  // Solution to slicing
  std::cout << std::endl << std::endl;
  Employee *e;
  Professor *p;
  p = new Professor{"Science", "Environmental Science"};
  e = p;
  e->output();
  p->output();





  return 0;
}
