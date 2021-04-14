#include <iostream>
using namespace std;

class Person{
protected:
  string *name;
public:
  Person(): Person("NoName"){}
  Person(string n ): name( new string(n) ){}

  void display()const{
    cout << "Name: " << *name << endl << endl;
  }
  // Big Three
  // Copy
  Person(const Person &p){
    cout << "Person: Copy constructor" << endl;
    name = new string (*(p.name));
  }
  // Assignment(=)
  Person& operator=(const Person &p){
    cout << "Person Assignment(=): " << endl;
    if(this != &p){
      *name = *(p.name);
    }
    return *this;
  }
  // Destructor
  ~Person(){delete name;}
};

class Student: public Person{ // A Student is-a Person
private:
  int *id;
public:
  Student(): Student("NoName",0){}
  Student(string n,int i): Person(n), id( new int(i)){}

  void display()const{ // Reassign
    cout << "Name: " << *name << endl
        << "ID: " << *id << endl<< endl;
  }
// Big Three
// Copy
  Student(const Student &s):
    Person(s),
    id(new int (*(s.id))) {cout << "Student Copy" << endl;}
// Assignment(=)
  Student& operator=(const Student &s){
    cout << "Student Assignment (=)" << endl;
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
  Student s1{"Legolas", 1234};
  s1.display();

  Student s2{s1};
  s2.display();

  Student s3{};
  s3 = s2;
  s2.display();


  return 0;
}
