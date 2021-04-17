#include <iostream>
using namespace std;

class Person{
protected:
  string *name;

public:
  Person():Person("NoName"){}
  Person(string n): name(new string(n) ){}

  void display(){
    cout << "Name: " << *name << endl <<endl;
  }
  // Big Three
  // Copy
  Person(const Person &p){
    cout << "Person copy" << endl;
    name = new string(*(p.name));
  }
  // Assignment(=)
  Person& operator=(const Person &p){
    cout << "Person Assignment " << endl;
    if(this != &p){
      *(name) = *(p.name);
    }
    return *this;
  }
  // Destructor
  ~Person(){delete name;}

};
// End of Person class


class Student : public Person{
private:
  int *id;

public:
  Student(): Student("NoName", 0){}
  Student(string n, int i): Person(n), id( new int(i) ){}

  void display(){
    cout << "Name: " << *name << " " << "ID: " << *id << endl << endl;
  }

  // Big Three
  // Copy
  Student(const Student &s):
  Person(s),
  id(new int( *(s.id) )){
    cout << "Student Copy" << endl;
  }
  // Assignment (=)
  Student &operator=(const Student &s){
    cout << "Student Assignemnt (=)" << endl;
    if(this != &s){
      Person::operator=(s);
      *(id) = *(s.id);
    }
    return *this;
  }
  ~Student(){delete id;}
};

int main(){
  Person p1{"Daniel"};
  p1.display();

  Student s1{"Jeff", 123};
  s1.display();

  Student s2{"Alvin", 4445};
  s2.display();

  Student s3{s1};
  s3.display();

  s1 = s2;
  s1.display();


  return 0;
}
