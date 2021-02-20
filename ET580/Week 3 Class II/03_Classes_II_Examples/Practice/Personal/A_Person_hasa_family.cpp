#include <iostream>

using namespace std;
// A person hasa Family
class Family{
private:
  int children;

public:
  Family(): Family(0){}
  Family(int c): children(c){}
  int getChildren()const{return children;}
  void setChildredn(int c){children = c;}

};

// End of class

class Person{
private:
  float salary;
  string married;
  string name;
  Family kids;

public:
  Person(): Person(0.0, "blank", "noName", 0){}
  Person(float s, string m, string n): salary(s), married(m), name(n), kids(){}
  Person(float s, string m, string n, int k): salary(s), married(m), name(n), kids(k){}
  Person(float s, string m, string n, Family& k): salary(s), married(m), name(n), kids(k){}

// Accessors
  float getSal()const {return salary;}
  string getMarried() const{return married;}
  string getName() const {return name;}
  int getKids() const{return kids.getChildren();}

// Mutators
  void setSale(float s){salary = s;}
  void setMarried(string m){married = m;}
  void setName(string n){name = n;}
  void setKids(int k){kids = k;}
};

void display(Person &p){
  cout << "Salary: " << p.getSal() << endl
      << "Marriage: " << p.getMarried() << endl
      << "Name: " << p.getName() << endl
      << "Kids: " << p.getKids() << endl << endl;
}

int main(){
  Person p1{};
  display(p1);

  Person p2{20000,"Yes", "Jamie" };
  display(p2);

  Person p3{30000, "No", "Alex",4};
  display(p3);

  Family f1{3};
  Person p4{50000, "Yes", "Jackie", f1};
  display(p4);


  return 0;


}
