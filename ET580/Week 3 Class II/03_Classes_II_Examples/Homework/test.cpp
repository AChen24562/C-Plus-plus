#include<iostream>
#include<iomanip>
using namespace std;

class Student{
private:
  class GPA{                    // nested GPA class
  public:
    float grade;

    GPA(): grade(0){};          // default constructor
    GPA(float f): grade(f){};   // one parameter constructor

    char getLetterGrade(){
      if (grade>=3.5){
        return 'A';
      }else if(grade>=2.5){
        return 'B';
      }else if(grade>=1.5){
        return 'C';
      }else if(grade>=1){
        return 'D';
      }else{
        return 'F';
      }
    }

  };

public:
  string name;
  string major;
  GPA gpa;

  Student(): Student("noname", "nomajor", 0.0){};
  Student(string n, string m, float g): name(n), major(m), gpa(g){};

  string getName() const { return name; }
  string getMajor() const { return major; }
  float getGPA() const { return gpa.grade; }

  void setName(string n){ name=n; }
  void setMajor(string m){ major=m; }
  void setGPA(float g){ gpa=g; }

  void printStudent(){

      cout << "Name: "    << getName()
           << "\nMajor: " << getMajor()
           << "\nGPA: "   << getGPA()               // prints grade data member in private GPA class
           << "\nGrade: "  << gpa.getLetterGrade(); // prints letter value of gpa

   }

};


int main(){

    cout << endl << endl;

    cout.setf(ios::fixed);
    cout.precision(2);



    Student s2{"Jane Doe", "Data Engineer", 4.00};
    s2.printStudent();

    Student s1{"John Doe", "Business Administration", 3.33};
    s1.printStudent();
    cout << endl << endl;

    cout << endl << endl;
    return 0;
}
