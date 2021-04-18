#include <iostream>
using namespace std;

class Person{
protected:
  string *name;

public:
  Person(): Person("NoName"){}
  Person(string n): name( new string(n) ){}

  string *getName()const{return name;}
  void setName(string n){*name =n;}

  void display()const{
    cout << *name <<endl;
  }
  // Big Three
  // Copy
  Person(const Person &p){
    cout << "Person Copy" << endl;
    name = new string( *p.name);
  }
  // Assignment(=)
  Person& operator=(const Person &p){
    cout << "Person Assignment(=)" << endl;
    if(this != &p){
      *(name) = *(p.name);
    }
    return *this;
  }
  // Destructor
  ~Person(){delete name;}

};

class Student: public Person{
private:
  int *iden;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), iden(new int(i) ){}

  int *getID()const{return iden;}
  void setID(int id){*iden = id;}

  void display()const{
    cout << *name << " " << *iden <<endl << endl;
  }

  // Big Three
  // Copy
  Student(const Student &s):
    Person(s),
    iden(new int( *(s.iden))) {
    cout << "Student Copy" << endl;
  }
  // Assignment (=)
  Student &operator=(const Student &s){
    cout << "Student Assignment(=)" << endl;
    if(this != &s){
      Person::operator=(s);
      *(iden) = *(s.iden);
    }
    return *this;
  }
  ~Student(){delete iden;}

};

int main(){
  Student s1{"Lego", 123214};
  s1.display();

  Student s2{s1};
  s2.display();

  Student s3{};
  s3 = s2;

  s3.display();

  return 0;
}
