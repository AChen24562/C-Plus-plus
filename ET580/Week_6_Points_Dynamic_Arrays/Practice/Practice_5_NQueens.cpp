#include <iostream>
using namespace std;

void print(int **arr, int size) {
  for(int i=0; i<size; ++i) {
      for(int j=0; j<size; ++j) {
        if( *(*(arr+i)+j) ==1){
          cout << "Q ";
        }
        else{
          cout <<" . ";
        }
          //cout << arr[a][i] << " ";
      }
      cout << "\n";
  }
}

void translate(int *queens, int **board, int size){
  for(int i =0; i <size; i++){
    for(int j = 0; j <size; j++){
      if(*(queens+i) == j){
        *(*(board+i)+j) = 1;
      }
    }
  }

  /*if(*(queens+0) == 3){
    *(*(board+0)+3) =1;
  }*/
}


int main(){
  int *queens = new int[8] {3, 6, 2, 7,1 ,4, 0, 5};

  // Array of Arrays
  // pointer to an array of pointers
  // ** Row of arrays, for loop runs through columns
  int **board = new int*[8];
  for(int i = 0; i < 8; i ++){
    board[i] = new int[8];
  }
  translate(queens, board, 8);
  print(board, 8);





  return 0;
}
