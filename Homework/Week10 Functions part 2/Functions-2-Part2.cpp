#include <iostream>

#include <cmath>
using namespace std;



int main(){
srand(time(NULL));

cout << "\nRandom sequence between 0 and 6:" << endl;
for(int i=0; i < 1; i++)
    cout << rand() % 7 << " ";
cout << endl << endl;

  return 0;
}
