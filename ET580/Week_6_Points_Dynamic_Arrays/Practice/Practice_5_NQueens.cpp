#include <iostream>
using namespace std;

void print(int **arr, int arrays, int integers) {
  for(int a=0; a<arrays; ++a) {
      for(int i=0; i<integers; ++i) {
          cout << arr[a][i] << " ";
      }
      cout << "\n";
  }
}


int main(){
  int *queens = new int[8] {3, 6, 2, 7,1 ,4, 0, 5};

  int **board = new int*[8];
  for(int i = 0; i < 8; i ++){
    board[i] = new int[8];
  }
  print(board, 8, 8);


  


  return 0;
}
