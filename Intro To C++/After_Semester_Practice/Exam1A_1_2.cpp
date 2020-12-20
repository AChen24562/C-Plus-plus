#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

// #1
string exam = "ET575ExamOne";
cout << "#1" << endl <<exam << endl <<endl;

// #2
string greeting = "Hello Wednesday";
cout << greeting[9] << endl;

for(int i =0; i < greeting.length(); i ++){
  if(greeting[i] == 'n'){
    cout << greeting[i] << " is in position " << i;
  }
}


  return 0;
}
