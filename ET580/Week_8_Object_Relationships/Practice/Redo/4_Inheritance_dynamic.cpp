#include <iostream>
using namespace std;

class Person{
protected:
  string *name;

public:
  Person():Person("NoName"){}
  Person(string n): name(new string(n)){}

  string getName()const{return *name;}
  void setName(string n){*name = n;}

  void display()const{
    cout << "Name: " << *name<< endl;
  }
  // Big Three
  // Copy
  Person(const Person &p):
  name(new string(*(p.name)))
  {
    cout << "Person Copy" << endl;
  }
  // Assignment(=)
  Person& operator=(const Person &p){
    cout << "Person Assignment (=)" << endl;
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
  int *id;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), id(new int(i)){}

  int getID()const{return *id;}
  void setID(int i){*id = i;}

  void display()const{
    cout << "Name: " << *name << endl
        << "ID: " << *id << endl << endl;
  }
  // Big three
  // Copy
  Student(const Student &s):
    Person(s),
    id(new int(*s.id))
  {cout << "Student Copy" << endl;}
  // Assignment
  Student &operator=(const Student &s){
    cout << "Assignment (=)" << endl;
    if(this != &s){
      Person::operator=(s);
      *id = *(s.id);
    }
    return *this;
  }
  // Destructor
  ~Student(){delete id;}
};

int main(){
  Student s1{"Daniel", 12314};
  s1.display();

  Student s2{s1};
  s2.display();

  Student s3{"Steven", 125123};
  s3 = s2;
  s3.display();


  return 0;
}
