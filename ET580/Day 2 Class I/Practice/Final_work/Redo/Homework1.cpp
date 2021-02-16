#include <iostream>

using namespace std;

class Student{
private:
  string name;
  int exam1;
  int exam2;
  float calcGPA();

public:
  Student(){
    name = "Unknown";
    exam1 = 0;
    exam2 = 0;
  }
// Accessors
string getName();
int getExam1();
int getExam2();
// Mutators
void setName(string n);
void setExam1(int e1);
void setExam2(int e2);

char getGrade();

};
// Externally Defined
string Student::getName(){return name;}
int Student::getExam1(){return exam1;}
int Student::getExam2(){return exam2;}
// Mutators
void Student::setName(string n){name = n;}
void Student::setExam1(int e1){exam1 = e1;}
void Student::setExam2(int e2){exam2 = e2;}

float Student::calcGPA(){return (exam1 + exam2)/2;} // Private Wraped function
char Student::getGrade(){
  float grade = calcGPA();
  if(grade >= 90){
    return 'A';
  }
  else if(grade >= 80){
    return 'B';
  }
  else if(grade >= 70){
    return 'C';
  }
  else if(grade >= 60){
    return 'D';
  }
  return 'F';
}


// End of externally defined

int main(){
  Student s1;
  cout << s1.getName() << endl
      << s1.getExam1() << endl
      << s1.getExam2() << endl
      << s1.getGrade() << endl << endl;

  s1.setName("Dan");
  s1.setExam1(80);
  s1.setExam2(85);
  cout << s1.getName() << endl
      << s1.getExam1() << endl
      << s1.getExam2() << endl
      << s1.getGrade() << endl;


  return 0;

}
