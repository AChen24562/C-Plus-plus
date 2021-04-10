#include <iostream>
using namespace std;

class Student{
private:
  string name;
  int *age;

public:
  Student(): Student("Noname", 0){}
  Student(string n, int a): name(n), age(new int(a) ){}

  void display();

  // The Big Three
  Student(const Student &s); // Copy
  Student& operator=(const Student &s); //  Assignment(=)
  ~Student(); // Destructor
};
// External
Student:: Student(const Student &s): // Copt
  name(s.name),
  age(new int (*s.age)){}

Student& Student::operator=(const Student &s){
  if(this != &s){
    *(age) = *(s.age);
    name = (s.name);
  }
    return *this;
}
Student::~Student(){
  delete age;
}


// end of class
void Student:: display(){
  cout << "Name: " << name << "\tMem Addr: " << &name <<endl
      << "Age: " << *age << "\nMem Addr: " << age << endl << endl;
}

int main(){
  Student s1 {};
  cout << "s1: " << endl;
  s1.display();

  Student s2 = s1;
  cout << "s2: "<< endl;
  s2.display();

cout << "Assignment (=): s2 = s3" << endl;
  Student s3{"Jerry", 21};
  s2 = s3;
  cout << "S3: " << endl;
  s3.display();
  cout << "S2: " << endl;
  s2.display();



  return 0;
}
