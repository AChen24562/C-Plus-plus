#include <iostream>

using namespace std;

class Student{
private:
  string name;
  int exam1;
  int exam2;

// Private function that averages the exams
  float calcGPA(int exam1, int exam2){
    return (exam1+exam2)/2;
  }
public:
  void setName(string n);
  void setExam1(int e1);
  void setExam2(int e2);

  string getName();
  int getExam1();
  int getExam2();

  // Public function that calls private function for the number grade
  // The public function takes the grade and returns a letter grade
  // Wrapper Function
  char getGPA();

};

// Externally defined member Functions
void Student::setName(string n){name = n;}
void Student::setExam1(int e1){exam1 = e1;}
void Student::setExam2(int e2){exam2 = e2;}

string Student::getName(){return name;}
int Student::getExam1(){return exam1;}
int Student::getExam2(){return exam2;}

// Public function that calls private
char Student::getGPA(){
  float grade = calcGPA(exam1, exam2);
  if(grade >= 90){
    return 'A';
  }
  else if(grade >= 80){
    return 'B';
  }
  else if(grade>= 70){
    return 'C';
  }
  else if(grade >= 60){
    return 'D';
  }
  return 'F';
}
//End of external

// Non member function
void display(Student &s){
  cout << s.getName() <<endl <<
  "Exam1: "<< s.getExam1() << endl<<
  "Exam2: " <<s.getExam2()<< endl<<
  "GPA: " << s.getGPA() << endl << endl;
}

int main(){
  Student  s1{};
  s1.setName("Daniel");
  s1.setExam1(80);
  s1.setExam2(75);

  display(s1);


  return 0;


}
