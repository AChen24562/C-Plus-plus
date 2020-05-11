#include <iostream>
using namespace std;

void swap(char& char1,char& char2){
  char temp = char2;
  char2 = char1;
  char1 = temp;

}


int main(){
char char1 = 'A';
char char2 = 'Z';

cout << char1 << endl << char2;

swap(char1, char2);
cout << endl << endl << char1 << endl << char2;

  return 0;
}
