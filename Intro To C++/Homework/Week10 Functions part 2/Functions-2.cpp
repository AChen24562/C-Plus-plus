//Prof. Sun
//Homework Week 10
//Alex Chen



//Question 1
/*#include <iostream>
#include <cmath>
using namespace std;

double sqrtRounded(double num){

  double result = sqrt(num);
  int rounded = round(result);
  return rounded;
}

int main(){
  double num;
  do{
    cout << "Enter a positive number <Or Enter a ZERO to exit>: ";
    cin >> num;
  if(num >-1){
    if(num == 0){
        cout << num << " is entered. Exiting Program." << endl
             << "---------------------------------";
        exit(0);
    }
    int rounded = sqrtRounded(num);
    cout << "The square root of " << num << " rounded to the nearest integer is "
         << rounded << endl << endl;

  }
    else
        cout << num << " is an invalid input. Please re-enter. "<< endl << endl;

  }while(true);



  return 0;
}*/


//Question 2
/*#include <iostream>
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
}*/
