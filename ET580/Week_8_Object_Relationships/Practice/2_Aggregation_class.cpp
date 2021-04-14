#include <iostream>
using namespace std;

class Professor{
private:
  string name;

public:
  Professor():Professor("NoName"){}
  Professor(string n): name(n) {}

  string getName()const{return name;}
  void setName(string n){name = n;}

  friend ostream& operator<<(ostream &out, const Professor &p);

};
ostream& operator<<(ostream &out, const Professor &p){
  out << "Prof Name: " << p.getName();
  return out;
}

class Course{ // Course has-a Prof, but Prof can change
private:
  int num;
  Professor *prof;

public:
  Course(): num(0), prof(nullptr){}
  Course(int n, string pName): num(n), prof( new Professor(pName)){}
  Course(int n, Professor &pName): num(n), prof(&pName){}

  // Accessors / Mutator
  int getNum()const{return num;}
  void setNum(int n){num = n;}

  Professor* getProf()const {return prof;}
  void setProf(Professor &p){prof = &p;}

  friend ostream& operator<<(ostream &out, const Course &c);

};
ostream& operator<<(ostream &out, const Course &c){
  out << "Course Number: " << c.num << endl
      << "Prof Name: " << c.prof->getName() << endl;
  return out;
}

int main(){
  Professor p1{"Trowbridge"};
  Course c1{580, p1};
  Course c2{580, "An"};

  cout << c1 << endl << c2 << endl;

  cout << *(c1.getProf()) << endl;
  cout << *(c2.getProf());


  return 0;
}
