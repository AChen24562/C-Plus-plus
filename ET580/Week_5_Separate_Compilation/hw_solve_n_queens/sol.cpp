#include<iostream>
using namespace std;

bool isSafePosition(const int a[], const int &SIZE, int row, int col ){

    for (int i=row-1; i>=0; --i){
        if(col==a[i]){          //check column conflict
          return false;
        }
        if(abs(row-(i))==abs(col-a[i])){  // check diagonal conflict
            return false;
           }
        }

    return  true;     // if no conflicts found, queens are safe

}



void output(const int a[], const int &SIZE){
  for(int i=0; i<SIZE; ++i){
      for(int j=0; j<SIZE; ++j){
        if(j==a[i]){
          cout << "Q ";
        } else{
            cout << ". ";
          }
      }
      cout << "\n";
  }

}


bool solve(int a[], const int &SIZE, int row ){

//Base Case:
if(row==SIZE){ return true;}

    for(int i=0; i<SIZE; ++i){
      bool safe=isSafePosition(a, SIZE, row, i);  // find safe position in current row
      if(safe){
         a[row]=i;                                // store queen position
         if(solve(a,SIZE,row+1)){                 // Recursive task
           return true;                           // if recursive task is true, return true
         }else{
           a[row]=-1;            // else find new position for previous row
         }

       }
    }

    return false;         // no safe positions in current row


}


int main(){
    cout << endl << endl;

    const int SIZE=4;
    int arr[SIZE];

    for (int i=0; i<SIZE; ++i){arr[i] = -1;}

    solve(arr, SIZE, 0);
    output(arr,SIZE);

    cout << endl << endl;
    return 0;
}
