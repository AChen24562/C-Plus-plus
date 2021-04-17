#include <iostream>
using namespace std;

class Professor{
private:
  string name;
public:
  Professor(): Professor("NoName"){}
  Professor(string n): name(n){}

  string getName()const{return name;}
  void setName(string n){name = n;}

  friend ostream& operator<<(ostream& out, const Professor &p);

};
ostream& operator<<(ostream& out, const Professor &p){
  out  << p.name;
  return out;
}

class Course{
private:
  int num;
  Professor *name;

public:
  Course(): num(0), name(nullptr){}
  Course(int nmb, string n): num(nmb), name(new Professor(n)){}
  Course(int nmb, Professor &p): num(nmb), name(&p){}

  int getNum()const{return num;}
  void setNum(int nmb){num = nmb;}

  Professor *getProf()const{return name;}
  void setProf(Professor &p){name = &p;}

  friend ostream& operator<<(ostream &out, const Course &c);
};
ostream& operator<<(ostream &out, const Course &c){
  out << c.num << " " << c.name->getName();
  return out;
}


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
