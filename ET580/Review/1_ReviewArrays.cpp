#include <iostream>
using namespace std;

// Pointer = &
int getmax(int num, int num2){
  if(num > num2){
    return num;
  }
  else if(num2 > num){
    return num2;
  }
  return num;
}

string getlast(string phrase){
  int lastelement = phrase.size();
  return phrase[lastelement- 1];
}



int main() {
cout << getmax(2, 2);

string phrase = "hello";


cout << getlast(phrase);


  return 0;
}
