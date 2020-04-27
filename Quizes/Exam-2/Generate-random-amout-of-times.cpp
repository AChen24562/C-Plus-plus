#include <iostream>
#include <ctime>
using namespace std;

// Size of die 1 - 6
int randomdie(){
  srand(time(NULL));
  int num;

  num =rand() % 6 +1;

  return num;
}

// Number of Rolls 1 -15
int randomroll(){
  srand(time(NULL));
  int roll;

  roll =rand() % 15 + 1;

  return roll;
}

// Random die size and random rolls
void rolldie(int num, int roll){
  srand(time(NULL));
  int counter =0;

  for(int i =1; i <roll +1; i++){

    int amount =rand() % num +1;
    counter +=amount;
    cout << "Roll " << i << ") "
         << amount <<endl;
  }
    cout << "Total: " << counter;
}

int main(){

  int num =randomdie();
  int roll =randomroll();

  cout << "Size of die: " << num
       << endl << "Number of rolls: " << roll
       << endl << endl;

  rolldie(num, roll);

  cout << endl << endl;
  int enter, enter2;
  cout << "Enter a die size and roll amount: ";
  cin >> enter >> enter2;

  rolldie(enter, enter2);
  return 0;
}
