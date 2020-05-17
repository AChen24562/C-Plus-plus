#include <iostream>
using namespace std;

void swap(char& char1, char& char2){
  char temp = char2;
  char2 = char1;
  char1 = temp;

  cout << char1 << endl << char2 << endl << endl;
}

int main(){
  char char1 = 'A';
  char char2 = 'Z';

  cout << char1 << endl << char2 << endl << endl;

  swap(char1, char2);

cout << char1 << endl << char2 << endl << endl;
  return 0;
}
