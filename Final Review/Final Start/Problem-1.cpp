#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

    const int size =100;

    void input(int array[], int amount){
      for(int i =0; i <amount; i++)
      array[i] = rand() % 9 +1;

    }

    void output(int array[], int amount){
      for(int i =0; i < amount; i++){
        cout << array[i] << " ";
      }
    }

    void intputAt(int array[], const int amount, int newNum, int numReplace){

      if(numReplace < amount){
        array[numReplace] = newNum;
      }
      else
          cout << "Action cannot be completed. Out of boundry." << endl;
    }

int main(){
  srand(time(NULL));
  int array[size];
  int amount =8;

  input(array, amount);
  output(array, amount);

  cout << endl << endl;

  intputAt(array, amount, 575,0);
  output(array,amount);

  cout << endl << endl;

  intputAt(array, amount, 575, 200);
  output(array,amount);

      return 0;
}
