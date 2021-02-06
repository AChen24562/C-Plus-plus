#include <iostream>
#include <ctime>
using namespace std;
// Exponential Time
void fill_array(int array[], int CAP){
  srand(time(NULL));

  for(int i =0; i < CAP; i++){
    int random_int =  rand() % CAP +1;
    array[i] = random_int;

    for(int j =0;j < i; j ++){
      if(array[j] == random_int){
        i--;
        break;
      }
    }


  }
}


void print(int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    cout << array[i] << " ";
  }
}
int main(){

  const int CAP = 10;
  int array[CAP];

  fill_array(array, CAP);
  print(array, CAP);
  return 0;

}
