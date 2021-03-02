#include <iostream>

using namespace std;

class Student{
private:
  string name;
  string major;
  int grade;

public:
  Student(): Student("noName", "noMajor", 0){}
  Student(string n): Student(n, "noMajor", 0){}
  Student(string n, string m): Student(n, m, 0){}
  Student(string n, string m, int g): name(n), major(m), grade(g){}


  // Accessors
string getName()const{return name;}
string getMajor()const{return major;}
int getGrade()const{return grade;}
  // Mutators
void setName(string n){name = n;}
void setMajor(string m){major = m;}
void setGrade(int g){grade = g;}

// Display
void display(){
  cout << "Name: " << getName() << endl
      << "Major: " << getMajor() << endl
      << "Grade: " << getGrade() << endl << endl;
}
};


int main(){
  Student s1{};
  s1.display();



  return 0;
}
