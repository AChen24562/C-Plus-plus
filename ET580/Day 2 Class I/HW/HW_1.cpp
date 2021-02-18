#include <iostream>

using namespace std;

class Student{
private:
  string name;
  int exam1;
  int exam2;
  float calcGPA(int e1, int e2){
    return (e1+e2) /2;
  }

public:
  Student(){name = "noName", exam1 = 0, exam2=0;}

  // Accessors
  string getName();
  int getExam1();
  int getExam2();

  // Mutators
  void setName(string n);
  void setExam1(int e1);
  void setExam2(int e2);

  char getGrade(){
    float grade = calcGPA(exam1, exam2);
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

};
// Externally Defined
// Accessors
string Student::getName(){return name;}
int Student::getExam1(){return exam1;}
int Student::getExam2(){return exam2;}

// Mutators
void Student::setName(string n){name = n;}
void Student::setExam1(int e1){exam1 = e1;}
void Student::setExam2(int e2){exam2 = e2;}

//End of Externally Defined

int main(){
  Student s1{};
  s1.setName("Daniel");
  s1.setExam1(80);
  s1.setExam2(75);

  cout << s1.getName() <<" " << s1.getExam1() << " "
  << s1.getExam2() <<"\t" << s1.getGrade();


  return 0;


}
