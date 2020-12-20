#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

int main(){
// Print hundreds digit #6
cout << "#6" << endl;
int n = 575;
cout << n % 10 << endl << endl;

// #7
cout << "#7" << endl;
int num = 1;
cout << (num < 28 && num % 7 != 0);

// #8
cout << endl << endl <<"#8" << endl;
srand(time(NULL));
int random;
cout << "Enter amount: ";
cin >> random;
for(int i =0; i < random; i++){
  cout << 7 + rand() % 5 << " ";
}

  return 0;

}
