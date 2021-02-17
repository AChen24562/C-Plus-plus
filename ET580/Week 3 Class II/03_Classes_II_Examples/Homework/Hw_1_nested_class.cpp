#include <iostream>

using namespace std;

class Student{
private:
  // Nested Class
  class GPA{
  public:
    GPA(): grade(0){} // default construc.
    GPA(float g): grade(g){} // one param construc
    float grade;

    char getLetterGrade(){
      if(grade >= 3.5){
        return 'A';
      }
      else if(grade >=2.5){
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

  string name;
  string major;
  GPA gpa; // Instatiated gpa of type class GPA
public:
  // default Constructor
  Student(): Student("noName", "noMajor", 0.0){}
  Student(string n, string m, float g): name(n), major(m), gpa(g){}

// Accessors
string getName()const{return name;}
string getMajor()const{return major;}
float getGPA()const{return gpa.grade;}
// Mutators
void setName(string n){name = n;}
void setMajor(string m){major = m;}
void setGPA(float g){gpa = g;}

// Display function
void display(){
  cout << "Name: " << name << endl<<
  "Major: " << major << endl <<
  "GPA: " << gpa.grade << endl <<
  "Grade: " << gpa.getLetterGrade() << endl << endl;
}
// Proper Display function
void display2(){
  cout << "Name: " << getName() << endl<<
  "Major: " << getMajor() << endl <<
  "GPA: " << getGPA() << endl <<
  "Grade: " << gpa.getLetterGrade() << endl << endl;
}

};

int main(){
  cout.setf(ios::fixed);
  cout.precision(2);

  Student s2{"Issac Asimov", "English", 3.33};
  s2.display();

  Student s1{"John Williams", "Music", 4.00};
  s1.display2();




  return 0;

}
