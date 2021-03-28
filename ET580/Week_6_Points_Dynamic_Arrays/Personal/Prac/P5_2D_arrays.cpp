#include <iostream>
using namespace std;

void translate(const int *queens, int **board, const int size){
  for(int i =0; i < size; i ++){
    for(int j=0; j <size; j ++){
      if(*(queens+i) == j){
        *(*(board+i)+j) = 1;
      }
    }
  }
}

void print(int **board, int size){
  for(int i =0; i <size; i ++){
    for(int j=0; j <size; j ++){
      if( *(*(board+i)+j) == 1){
        cout << " Q ";
      }
      else{
        cout << " . " ;
      }
    }
    cout << endl;
  }
}

int main(){
  int *queens = new int[8]{3,6,2,7,1,4,0,5};

  int **board = new int*[8]{};
  for(int i = 0; i <8; i ++){
    *(board+i) = new int[8]{};
  }

  const int size = 8;
  translate(queens, board, 8);
  print(board, 8);


  return 0;
}
