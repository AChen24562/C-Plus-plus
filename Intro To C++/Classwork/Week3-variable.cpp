#include <iostream>
#include <string>
using namespace std;


int main(){
  string name;
  int id;
  char gender;
  int age;
  bool cuny;
  double gpa;

  cout << "What is your name? ";
  getline(cin, name);
  cout << endl;

  cout << "What is your ID? ";
  cin >> id;
  cout << endl;

  cout << "What is your gender? (One letter)";
  cin >> gender;
  cout << endl;

  cout << "What is your age? ";
  cin >> age;
  cout << endl;

  cout << "Are you a CUNY student? (1 for yes/ or 0 for no)";
  cin >> cuny;
  cout << endl;

  cout << "What is your GPA? ";
  cin >> gpa;
  cout << endl;


  cout << "You answered: " << name << ", " << id << ", " << gender
    << ", " << age << ", " << cuny << ", " << gpa << ".";



  return 0;
}
