#include <iostream>
#include <ctime>
using namespace std;

// First roll
void roll(){
  srand(time(NULL));
  for(int i=1; i< 11; i++){
  cout << "Roll 6) " << rand() % 6 +1 << endl;
}
}

// Overload
void roll(int num, int num2, int num3){
  srand(time(NULL));
  cout << "Roll " << num << ") " << rand() % num + 1<< endl;
  cout << "Roll " << num2 << ") " << rand() % num2 + 1<< endl;
  cout << "Roll " << num3 << ") " << rand() % num3 + 1<< endl;
}

void roll(int numOnDie, int roll){
  srand(time(NULL));
  int counter = 0;

  for(int i = 0; i <roll; i++){
    counter += rand() % numOnDie +1;
  }
  cout << "Roll <" << numOnDie << "d"<< roll << ">: " << counter <<endl;
}

int main(){

roll();
cout << endl << endl;
roll(10, 20, 30);
cout << endl << endl;
roll (3, 7);
roll (2,8);
roll (5, 10);


  return 0;
}
