#include <iostream>

using namespace std;

void queen(int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    for(int j=0; j < CAP; j++){
      if(array[i] == j){
        cout << "Q ";
      }
      else{
        cout << ". ";
      }
    }
    cout << endl;
  }
}

int main(){

  const int CAP = 4;
  int array[CAP] = {2, 1, 3, 0};

  queen(array, CAP);

  return 0;


}
