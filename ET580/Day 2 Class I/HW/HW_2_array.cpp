
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
void addStudent(Student array[], const int CAP, int &size, string n, int e1, int e2){
  if(size < CAP){
    Student s{};
    s.setName(n);
    s.setExam1(e1);
    s.setExam2(e2);
    array[size] = s;
    size++;
  }
}

void output(Student array[], const int size){
  for(int i =0; i <size; i++){
    cout << "Name: "<< array[i].getName()<<endl
    << "Exam1: " <<array[i].getExam1()<<endl
    <<"Exam2: "<<array[i].getExam2() << endl
    << "GPA: " << array[i].getGrade() << endl << endl;
  }
}



int main(){
  const int CAP = 10;
  int size = 0;
  Student students[CAP];
  addStudent(students, CAP, size, "Amy", 95, 90);
  addStudent(students, CAP, size, "Bob", 74, 63);
  addStudent(students, CAP, size, "Charlie", 86, 80);
  addStudent(students, CAP, size, "Daisy", 75, 99);
  addStudent(students, CAP, size, "Edward", 24, 66);

  output(students, size);

  return 0;

  }
