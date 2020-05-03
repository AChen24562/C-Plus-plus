#include <iostream>
using namespace std;

int main() {

  const int dim1 = 2;
  const int dim2 = 5;

  int array[dim1][dim2] = {0, 1, 2, 3, 4 ,5 ,6,7,8,9};

  for(int i=0; i<dim1; i++){
    for(int j=0; j<dim2; j++)
      cout << array[i][j] << " ";
      cout << endl;
  }
cout << endl << endl;
cout << array[0][0];

return 0;
}
