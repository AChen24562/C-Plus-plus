#include<iostream>
using namespace std;


class Student{
private:
  string name;
  int exam1_grade;
  int exam2_grade;

  float calcGPA();

public:
  string getName(){ return name; }
  int getExam1(){ return exam1_grade; }
  int getExam2(){ return exam2_grade; }

  void setName(string n){  name=n;  }
  void setExam1(int g){ exam1_grade=g; }
  void setExam2(int g){ exam2_grade=g; }
  char getGrade();
};

// Externally Defined Member Functions

float Student::calcGPA(){
    return ((exam1_grade+exam2_grade)/2.0);
}

char Student::getGrade(){

      float gpa= calcGPA();
      if (gpa>90 && gpa<=100){
          return 'A';
      }else if(gpa>80 && gpa<=90){
          return 'B';
      }else if(gpa>70 && gpa<=80){
          return 'C';
      }else if(gpa>60 && gpa<=70){
          return 'D';
      }else{
          return 'F';
      }

}

// Non Member Functions

void addStudent(Student arr[], int &size, const int CAPACITY, string n, float g1, float g2 ){
      Student student1{};
      student1.setName(n);
      student1.setExam1(g1);
      student1.setExam2(g2);
      student1.getGrade();

      if(size<CAPACITY){
         arr[size]=student1;
         ++size;
      }


}

void output(Student arr[], int size){
  // access each object, use dot notation to access instance functions
    for(int i=0; i<size; ++i){
        cout << "Name: " << arr[i].getName() << endl
             << "Exam 1: " << arr[i].getExam1() << endl
             << "Exam 2: " << arr[i].getExam2() << endl
             << "GPA: " << arr[i].getGrade() << endl;

        cout << endl;

    }

}

int main(){
  cout << endl << endl;
  const int CAPACITY=10;
  int size=0;

  Student students[CAPACITY];

  addStudent(students, size, CAPACITY, "Josh", 95, 70);
  addStudent(students, size, CAPACITY, "Amy", 93, 95);
  addStudent(students, size, CAPACITY, "John", 62, 45);
  addStudent(students, size, CAPACITY, "Kate", 32, 90);
  addStudent(students, size, CAPACITY, "Kole", 80, 77);


  output(students, size);


  cout << endl << endl;
  return 0;
}
