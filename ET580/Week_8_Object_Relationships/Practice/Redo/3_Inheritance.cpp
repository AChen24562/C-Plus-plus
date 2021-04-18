#include <iostream>
using namespace std;

class Person{
protected:
  string name;

public:
  Person(): Person("NoName"){}
  Person(string n): name(n){}

  string getName()const{return name;}
  void setName(string n){name =n;}

  void display()const{
    cout << name <<endl;
  }

};

class Student: public Person{
private:
  int iden;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), iden(i){}

  int getID()const{return iden;}
  void setID(int id){iden = id;}

  void display()const{
    cout << name << " " << iden <<endl;
  }

};

int main(){
  Person p1{"Aaron"};
  p1.display();

  Student s1{"Steven", 1231231};
  s1.display();

  return 0;
}
