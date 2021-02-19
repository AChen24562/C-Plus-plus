#include <iostream>
#include <cmath>

using namespace std;

void display(int array[], const int CAP){
  for(int i = 0; i < CAP; i ++){
    for(int j =0; j < CAP; j++){
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

bool isSafe(int array[], const int CAP){
  for(int i =0; i <CAP; i++){
    for(int j = i+1; j < CAP; j++){
      if(array[i] == array[j]){
        return false;
      }
      else{
        if(abs(j -i) == abs(array[j] - array[i])){
          return false;
        }
      }
    }
  }
  return true;

}

int main(){
  const int CAP = 8;
  int array[CAP] = {3,6,2,7,1,4,0,5};
  display(array, CAP);
  cout << isSafe(array, CAP);



  return 0;
}
