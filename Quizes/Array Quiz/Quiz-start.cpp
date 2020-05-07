#include <iostream>
#include <string>
using namespace std;

void createName(string name[]){
    cout << "Enter your First Name: ";
    cin >> name[0];
    cout << "Enter your Last Name: ";
    cin >> name[1];
}

void printName(string name[], int size){
  cout << "My name is ";
  for(int i = 0; i <size; i++){
    cout << name[i] << " ";
  }
}

int main(){
  const int size =2;
  string name[size];

  createName(name);
  cout << endl << endl;
  printName(name, size);

  return 0;
}
