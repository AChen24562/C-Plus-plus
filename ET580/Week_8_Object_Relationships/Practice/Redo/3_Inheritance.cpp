#include <iostream>
using namespace std;

class Person{
protected:
  string name;

public:
  Person():Person("NoName"){}
  Person(string n): name(n){}

  string getName()const{return name;}
  void setName(string n){name = n;}

  void display()const{
    cout << "Name: " << name<< endl;
  }
};

class Student: public Person{
private:
  int id;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), id(i){}

  int getID()const{return id;}
  void setID(int i){id = i;}

  void display()const{
    cout << "Name: " << name << endl
        << "ID: " << id << endl << endl;
  }

};

int main(){
  Student s1{"Daniel", 12314};
  s1.display();

  cout << s1.getName();


  return 0;
}
