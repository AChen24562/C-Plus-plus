#include <iostream>
using namespace std;

int main(){
  string phrase;
  cout << "Enter a 5 letter word: ";
  cin >> phrase;

  if (phrase.size() != 5){
    cout << "Fail" << endl;
    return 0;
  }
else{
      cout << phrase << endl;
}


int number;
cout << "Enter a number between 120-130";
cin  >> number;

  if (number.size() != 120 - 130){
    cout << "Fail" << endl;
    return 0;
  }



  return 0;
}
