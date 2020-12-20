#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

int main(){
// # 8
cout << "#8" << endl;
int x,  y,  z= 10;
bool w = true; // w == 1
cout << w << endl;

x = w = y-z; // x = 1 = 0, therefore x == 1
cout << x;

// # 9
cout << endl << endl << "#9"<< endl;
int x1 = 15;
cout << ((x1 >= 15) || !(x1 <=15)) << endl;

//#10
cout << endl <<"#10" << endl;
int x2 = 8, y2 = 5, z2 =1;
int yes_no;

yes_no = !(x2 <=y2 && x2<=z2);
cout << yes_no << endl;

yes_no = !yes_no;
cout << yes_no << endl;

yes_no = (x > 5 || y != z);
cout <<yes_no <<endl;

yes_no = (x/y == z);
cout <<yes_no <<endl;

yes_no = (y % x != z && !z);
cout << yes_no <<endl;

  return 0;

}
