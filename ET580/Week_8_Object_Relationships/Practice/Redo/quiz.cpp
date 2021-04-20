#include <iostream>
using namespace std;

class Job{
protected:
  string field;
public:
  Job():Job("NoField"){}
  Job(string f): field(f){}

  string getField()const{return field;}
  void setField(string f){field = f;}

  void display()const{
    cout << "Field: " << field << endl;
  }
};

class Manager:public Job{
private:
  string name;

public:
  Manager():Manager("NoField", "NoName"){}
  Manager(string f, string n): Job(f), name(n){}

  string getName()const{return name;}
  void setName(string n){name = n;}

  void display()const{
    cout << "Name: " << name << " Field: " << field << endl;
  }
};

int main(){
  Manager m1{"CS", "Senior Development Manager"};
  m1.display();

  cout << m1.getName() << endl;
  cout << m1.getField() << endl;

  return 0;
}
