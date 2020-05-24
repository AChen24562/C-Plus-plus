#include <iostream>
using namespace std;

int main(){
  string phrase;
  cout << "Enter a phrase: ";
  cin >> phrase;

  cout << endl;

  char temp = phrase[0];
  phrase[0] = phrase[phrase.length()-1];
  phrase[phrase.length()-1] = temp;

  cout << phrase << endl;



  return 0;
}
