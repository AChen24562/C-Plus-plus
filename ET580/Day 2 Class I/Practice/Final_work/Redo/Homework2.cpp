#include <iostream>

using namespace std;

class Student{
private:
  string name;
  int exam1;
  int exam2;
  float calcGPA(){
    return (exam1+exam2)/2;
  }

public:
  void setName(string n);
  void setExam1(int e1);
  void setExam2(int e2);

  string getName();
  int getExam1();
  int getExam2();

  char getGrade();
};
// Externally Defined
void Student::setName(string n){name = n;}
void Student::setExam1(int e1) {exam1 = e1;}
void Student::setExam2(int e2) {exam2 = e2;}

string Student::getName(){return name;}
int Student::getExam1(){return exam1;}
int Student::getExam2(){return exam2;}

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
// End of Externally Defined

void addStudent(Student students[], const int CAP, int &size, string n, int e1, int e2){
  Student s{};
  if(size < CAP){
    s.setName(n);
    s.setExam1(e1);
    s.setExam2(e2);
    students[size] = s;
    size ++;
  }
}

void output(Student students[], const int size){
  for(int i =0;i<size; i++){
    cout << "Name: "<<students[i].getName() << endl << "Exam 1: "
      << students[i].getExam1() << endl<< "Exam 2: " <<students[i].getExam2()<< endl
      << "GPA: " <<students[i].getGrade() << endl <<endl;
  }
}
int main(){
  Student s1{};
  s1.setName("Alvin");
  s1.setExam1(75);
  s1.setExam2(75);

  cout << s1.getName() <<endl << "Exam1: "<< s1.getExam1() <<endl << "Exam2: "
    << s1.getExam2() <<endl << "Grade: ";
  cout  <<s1.getGrade() << endl;

  const int CAP = 10;
  int size =0;
  Student students[CAP];

  addStudent(students, CAP, size,"Derek", 80, 92);
  addStudent(students, CAP, size, "Jim", 95, 90);
  cout << endl;
  output(students, size);
  return 0;

}
