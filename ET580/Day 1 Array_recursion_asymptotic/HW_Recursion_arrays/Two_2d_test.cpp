#include <iostream>
#include <ctime>
using namespace std;

const int ROW = 3;
const int COL = 4;
void create(int matrix[][COL]){
  int num = 1;
  for(int i =0; i< ROW; i ++){
    for(int j =0; j <COL; j++){
      matrix[i][j] = num ++;
    }
  }
}

void print(int matrix[][COL]){
  for(int i =0; i <ROW; i++){
    for(int j =0; j <COL; j++){
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}

int main(){


int matrix[ROW][COL];
create(matrix);
print(matrix);
return 0;

}
