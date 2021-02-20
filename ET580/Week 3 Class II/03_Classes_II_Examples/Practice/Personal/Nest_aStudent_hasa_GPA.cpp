#include <iostream>

using namespace std;

class Student{
private:
  // Nested
  class GPA{
    public:
    float grade;

    GPA(): GPA(0){}
    GPA(float g): grade(g){}

    char getLetterGrade(){
      if(grade >= 3.5){
        return 'A';
      }
      else if(grade >= 2.5){
        return 'B';
      }
      else if(grade >= 1.5){
        return 'C';
      }
      else if(grade >= 1){
        return 'D';
      }
      return 'F';
    }
  };
  // end of Nested
  string name;
  string major;
  GPA gpa;
public:
  Student(): Student("noName", "noMajor", 0.0){}
  Student(string n, string m, float g): name(n), major(m), gpa(g){}


  // Accessors
  string getName()const {return name;}
  string getMajor() const{return major;}
  float getGPA() const{return gpa.grade;}
  // Mutators
  void setName(string n){name =n;}
  void setMajor(string m){major = m;}
  void setGPA(float g){gpa = g;}

  void display(){
    cout <<"Name: "<< getName() << endl
        << "Major: " <<getMajor() << endl
        << "GPA: " << getGPA() << endl
        << "Grade: " << gpa.getLetterGrade() << endl << endl;
  }
};
int main(){
  cout.setf(ios::fixed);
  cout.precision(2);

  Student s1{};
  s1.display();

  Student s2{"John Williams", "Music", 4.00};
  s2.display();

  Student s3{"Issac", "English", 3.33};
  s3.display();

  return 0;


}
