#include <iostream>
using namespace std;

void translate(int *queens ,int **board, int size){
  for(int i = 0; i <size; i ++){
    for(int j = 0; j <size; j ++){
      if(*(queens +i) == j){
        *(*(board+i) +j) = 1;
      }
    }
  }
}

void print(int **board, int size){
  for(int i =0;i < size; i ++){
    for(int j = 0; j < size; j++){
      if( *(*(board+i)+j) ==1){
        cout << "Q " ;
      }
      else{
        cout << ". ";
      }
    }
    cout << endl;
  }
}

void display(int**board, int size){
  for(int i =0; i <size;i++){
    for(int j = 0; j <size; j++){
      cout << *(*(board+i)+j ) << " ";
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

  display(board, 8);
  cout << endl << endl;
  translate(queens, board,  8);
  display(board, 8);
  cout << endl << endl;
  print(board, 8);



  return 0;
}
