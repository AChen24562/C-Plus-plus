#include <iostream>
using namespace std;

class Professor{
private:
  string name;

public:
  Professor():Professor("NoName"){}
  Professor(string n): name(n){}

  string getName()const{return name;}
  void setName(string n){name =n;}

  friend ostream& operator<<(ostream& out, const Professor &p);

};
ostream& operator<<(ostream& out, const Professor &p){
  out << p.name;
  return out;
}

class Course{ //Course has a Professor, but Prof. can change
private:
  int num;
  Professor *prof;

public:
  Course(): num(0), prof(nullptr){}
  Course(int n, string p): num(n), prof(new Professor(p)){}
  Course(int n, Professor &p): num(n), prof(&p){}

  int getNum()const{return num;}
  void setNum(int n){num =n;}

  Professor *getProf(){return prof;}
  void setProf(Professor &p){prof = &p;}

  friend ostream &operator<<(ostream &out, const Course &c){
    out << c.num << " " << c.prof->getName();
    return out;
  }

};

int main(){
  Professor p1{"Trowbridge"};

  Course c1{580, p1};
  cout << c1 << endl;

  Course c2{580, "An"};
  cout << c2 << endl;

  cout << p1.getName() << endl;
  cout << *(c2.getProf()) << endl;



  return 0;
}
