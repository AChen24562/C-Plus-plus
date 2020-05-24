//Prof. Sun
//Homework Week 10
//Alex Chen

//Question 2
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

  void roll(){
    srand(time(NULL));

    for(int i=0; i < 3; i++)
        cout << "Roll <6>: " << rand() % 6 + 1 << endl;
  }

  void roll(int num, int num2, int num3){
    srand(time(NULL));

    for(int i=0; i < 1; i++)
        cout << "Roll <" << num << ">: " << rand() % num + 1 << endl;
        cout << "Roll <" << num2 << ">: " << rand() % num2 + 1 << endl;
        cout << "Roll <" << num3 << ">: " << rand() % num3 + 1 << endl;
  }

  void roll(int n, int r){
    srand(time(NULL));
    int counter = 0;

    for(int i=0; i < r; i++){
      counter += rand() % n + 1;
      }
      cout << "Roll <" << n << "d"<< r << ">: " << counter << endl;

  }



int main(){

roll();
cout << endl << endl;
roll(10, 20, 30);
cout << endl << endl;
roll(3, 7);
roll(3, 8);
roll(5, 10);


return 0;
}
