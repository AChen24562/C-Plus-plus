#include <iostream>
#include <ctime>
using namespace std;

const int COL = 4;

void fill(int array[][COL], int ROW, int COL){
  int num = 1;
  for(int i =0; i <ROW; i++){
    for(int j =0; j<COL; j++){
      array[i][j] = num++;
    }
  }
}

void print(int array[][COL], int ROW, int COL){
  for(int i =0; i <ROW; i++){
    for(int j =0; j<COL; j++){
      cout << array[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
}

int main(){
const int ROW = 4;
const int COL = 4;

int matrix[ROW][COL];

fill(matrix,ROW,COL);
print(matrix, ROW, COL);

matrix[ROW-1][COL-1] = 234;
print(matrix, ROW, COL);

return 0;

}
