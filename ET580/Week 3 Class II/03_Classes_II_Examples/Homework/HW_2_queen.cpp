#include <iostream>
#include <cmath>

using namespace std;


void displayQ(int array[], const int CAP){
  for(int i = 0; i <CAP; i ++){
    for(int j =0; j < CAP; j++){
      if(array[i] == j){
        cout << " Q ";
      }
      else{
        cout << " . ";
      }
    }
    cout << endl;
  }
  cout << endl << endl;
}

bool isSafe(const int array[], const int CAP){

  for(int i =0; i < CAP; i++){
    for(int j = i +1; j < CAP; j ++){
      if(array[i] == array[j]){ // Checks columns for any Q on same column
        return false;

      }
      else{
        if(abs(j-i) == abs(array[j]-array[i])){ // check for diagonal queens
        return false;
        }

      }

    }
  }
  return true;
}

int main(){
  const int CAP = 8;
  int safe[CAP] = {3,6,2,7,1,4,0,5};
  displayQ(safe, CAP);
  if (isSafe(safe, CAP)){
    cout << "Queens are Safe"<< endl;
  }
  else{
    cout << "Queens are NOT safe" << endl;
  }


  int test[CAP] = {0,1,2, 3,4,5,6, 7};
  displayQ(test, CAP);
  cout << endl ;
  if (isSafe(test, CAP)){
    cout << "Queens are Safe";
  }
  else{
    cout << "Queens are NOT safe";
  }



  return 0;

}
