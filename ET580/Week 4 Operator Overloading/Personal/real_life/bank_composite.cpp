#include <iostream>

using namespace std;

class Bank{
private:
  float balance;
  string accountNum;

public:
  Bank(): Bank(0.0, "NULL"){}
  Bank(float b, string aN): balance(b), accountNum(aN){}

  // Accessors
float getBalance()const{return balance;}
string getAccount()const{return accountNum;}
  // Mutators

void setBalance(float b){balance = b;}
void setAccount(string aN){accountNum = aN;}
};
//end of bank class


class Person{
private:
string name;
int age;
Bank Account;

public:
  // Name, Age, Balance, Acc num
  Person(): Person("noName", 0, 0.0, "NULL"){}
  Person(string n): Person(n, 0){}
  Person(string n, int a): name(n), age(a){}

  // Three and 4 Parameters
  Person(string n, int a, float b): Person(n, a, b, "NULL"){}
  Person(string n, int a, float b, string ac): name(n), age(a), Account(b, ac){}


  // Accessors
  string getName()const{return name;}
  int getAge()const{return age;}


  // Mutators
  void setName(string n){name = n;}
  void setAge(int a){age = a;}

  // Composite functions
  float getBalance()const{return Account.getBalance();}
  string getAccount()const{return Account.getAccount();}

  void setBalance(float b){Account.setBalance(b);}
  void setAccount(string n){Account.setAccount(n);}

// Display
  void display(){
    cout << "Name: " << getName() << endl
        << "Age: " << getAge() << endl
        << "Bank Acc Info: $" << getBalance() << endl
        << "Acc #: " << getAccount()
        << endl << endl;
  }

};
//externally defined


int main(){
  cout.setf(ios::fixed);
  cout.precision(2);
  // Name, Age, Balance, Acc num
  Person p1{};
  p1.display();

  Person p2{"Alvin", 22, 20000, "1532411231"};
  p2.display();



  return 0;
}
