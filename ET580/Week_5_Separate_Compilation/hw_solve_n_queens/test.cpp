#include <iostream>
using namespace std;

void displayQ(int array[], const int CAP){
  for(int i = 0; i <CAP; i ++){
    for(int j =0; j < CAP; j++){
      if(array[i] == j ){
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
bool isSafePosition(const int array[], const int& CAP, int row, int col){
  for (int i=row-1; i>=0; --i){
      if(col==array[i]){
        return false;
      }
      if(abs(row-(i))==abs(col-array[i])){
          return false;
         }
      }

  return  true;
}

bool solve(int array[], const int CAP, int row){
  if(row == CAP){
    return true;
  }
  for(int i=0; i <CAP; i++){
    for(int j=0; j<CAP; j++){
      array[row] = j;
      if(isSafePosition(array,CAP, row, j)){
        if(solve(array, CAP, row+1)){
          return true;
        }
        else{
          array[row] = -1; // Changed Line
        }
      }

    }
  }
return false;
}


int main(){
  const int CAP = ;
  int array[CAP];
  for(int i =0; i <CAP; i++){
    array[i] = -1;
  }

  solve(array, CAP, 0);
  displayQ(array, CAP);

  return 0;


}
