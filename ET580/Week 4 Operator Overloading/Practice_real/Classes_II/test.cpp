#include <iostream>

using namespace std;

class Student{
private:
class Grade{
public:
  int grade;
    Grade(): Grade(0){}
  Grade(int g):grade(g){}
};

string name;
int age;
Grade grade;

public:
    Student(): Student("Noname", 0, 0){}
    Student(string n): Student(n, 0,0){}
    Student(string n, int a, int g): name(n), age(a), grade(g){}
//Student(string n, int a, int g):name(n), age(a), grade(g){}

    string getName()const{return name;}
    int getAge() const{return age;}
    int getGrade()const {return grade.grade;}

    void setName(string n) {name = n;}
    void setAge(int a){age = a;}
    void setGrade(int g){grade.grade = g;}
//void setGrade(int g){gpa.grade =  g;}﻿﻿﻿﻿﻿﻿﻿﻿

};

void display(Student &s){
  cout << s.getName() << endl << s.getAge() << endl << s.getGrade() << endl;
}
int main(){
  Student s1{"Alvin", 21, 22};
  display(s1);

  Student s2{"Bill"};
  display(s2);


  return 0;


}
