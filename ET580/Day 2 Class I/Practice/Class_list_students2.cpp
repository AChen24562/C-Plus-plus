#include <iostream>

using namespace std;
class Student{
private:
  // Private data members
  string name;
  int exam_1;
  int exam_2;
// Private function for returning letter grade Returns the float average
  float calcGPA();

public:

  // Mutators
  void setName(string n);
  void setExam1(int exam1);
  void setExam2(int exam2);
  // Accessors
  string getName();
  int getExam1();
  int getExam2();

  // Public function that calls the private function, returns the letter of average
  char getGrade();
}; // End of Class

// Defined externally
void Student::setName(string n) {name = n;}
void Student::setExam1(int exam1){exam_1 = exam1;}
void Student::setExam2(int exam2){exam_2 = exam2;}

string Student::getName(){return name;}
int Student::getExam1(){return exam_1;}
int Student::getExam2(){return exam_2;}

// Public function that returns letter for average
char Student::getGrade(){
  float grade = calcGPA();
  if(grade >=90){
    return 'A';
  }
  else if(grade>=80){
    return 'B';
  }
  else if(grade >=70){
    return 'C';
  }
  else if(grade >=60){
    return 'D';
  }
  return 'F';
}
// Private function that returns float of average
float Student::calcGPA(){
  return (exam_1+exam_2)/2;
}
// End of defined Externally


// Add Students to a array of class Student
void addStudent(Student array[], const int CAP, int &size, string n, int e1, int e2){
  if(size < CAP){
    Student stu{};
    stu.setName(n);
    stu.setExam1(e1);
    stu.setExam2(e2);
    array[size] = stu;
    size ++;
  }
}

// Display array of class student
void display_array(Student array[], const int size){
  for(int i =0; i <size; i ++){
    cout << "Name: " << array[i].getName() << endl;
    cout << "Exam1: " << array[i].getExam1() << endl;
    cout << "Exam2: " << array[i].getExam2() << endl;
    cout << "GPA: " << array[i].getGrade() << endl;
  cout << endl;
  }
}



int main(){

  const int CAP =10;
  int size = 0;

  Student array[CAP];

  addStudent(array, CAP, size, "Amy", 95, 90);
  addStudent(array, CAP, size, "Bob", 74, 63);
  addStudent(array, CAP, size, "Charlie", 86, 80);
  addStudent(array, CAP, size, "Daisy", 75, 99);
  addStudent(array, CAP, size, "Edward", 24, 66);

  display_array(array, size);
  Student s1{};
  s1.setExam1(75);
  s1.setExam2(75);

  cout << endl <<s1.getGrade();
  return 0;
}
