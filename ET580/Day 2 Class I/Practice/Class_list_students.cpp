#include <iostream>

using namespace std;
class Student{
private:
  // Private data members
  string name;
  int exam_1;
  int exam_2;
// Private function for returning letter grade
  char calcGPA(int exam){
    if(exam >=90){
      return 'A';
    }
    else if(exam>=80){
      return 'B';
    }
    else if(exam >=70){
      return 'C';
    }
    else if(exam >=60){
      return 'D';
    }
    return 'F';
  }

public:

  // Mutators
  void setName(string n);
  void setExam1(int exam1);
  void setExam2(int exam2);
  // Accessors
  string getName();
  int getExam1();
  int getExam2();

  // Public function that calls the private function
  void getGrade(){
    cout <<endl << "Exam 1: "<< calcGPA(exam_1) << endl << "Exam 2: "
    <<calcGPA(exam_2);
  }
};
// Defined externally
void Student::setName(string n) {name = n;}
void Student::setExam1(int exam1){exam_1 = exam1;}
void Student::setExam2(int exam2){exam_2 = exam2;}

string Student::getName(){return name;}
int Student::getExam1(){return exam_1;}
int Student::getExam2(){return exam_2;}

int main(){
  const int CAP =10;
  int size = 0;

  string array[CAP];  

  return 0;
}
