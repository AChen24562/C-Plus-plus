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

void addStudent(Student array[], const int CAP, int &size, string n, int e1, int e2){
  if(size < CAP){
    Student s{};
    s.setName(n);
    s.setExam1(e1);
    s.setExam2(e2);
    array[size] = s;
    size ++;
  }
}

void outputArray(Student array[], const int size){
  for(int i =0; i <size; i++){
    cout << "Name: "<<array[i].getName() <<endl
        <<"Exam 1: " << array[i].getExam1()<<endl
        <<"Exam 2: " << array[i].getExam2() << endl
        <<array[i].getGPA() << endl << endl;
  }
}
int main(){

  const int CAP = 10;
  int size = 0;
  Student array[CAP];

  addStudent(array, CAP, size, "Amy", 95, 90);
  addStudent(array, CAP, size, "Bob", 74, 63);
  addStudent(array, CAP, size, "Charlie", 86, 80);
  addStudent(array, CAP, size, "Daisy", 75, 99);
  addStudent(array, CAP, size, "Edward", 24, 66);
  outputArray(array, size);
  return 0;


}
