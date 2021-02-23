#include <iostream>

using namespace std;
class BankAcc{
private:
  float balance;

public:
  BankAcc():BankAcc(0.0){}
  BankAcc(float b): balance(b){}

  //Accessors
float getBalance()const{return balance;}
  //Mutators
void setBalance(float b){balance =b;}
};



class Person{
private:
  string name;
  int age;
  BankAcc balance;

public:
  Person(): Person("NoName", 0, 0){}
  Person(string n):Person(n, 0, 0){}
  Person(string n, int a): Person(n, a, 0){}
  Person(string n, int a, float b): name(n), age(a), balance(b){}

// Accessors
string getName()const{return name;}
int getAge()const {return age;}
float getBalance()const {return balance.getBalance();}
// Mutators
void setName(string n){name=  n;}
void setAge(int a){age = a;}
void setBalance(float b){balance = b;}

  void display(){
    cout <<"Name: " << getName() << endl
        <<  "Age: " << getAge() << endl
        << "Bank Balance: $" << getBalance() << endl << endl;
  }
};
// End of Class

int main(){
  cout.setf(ios::fixed);
  cout.precision(2);
  Person p1{};
  p1.display();

  Person p2{"alvin", 20, 10000.24};
  p2.display();

  return 0;


}
