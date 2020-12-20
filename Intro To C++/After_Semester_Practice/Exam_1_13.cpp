#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

using namespace std;

int main(){
int weight_lbs;
cout << "Enter the weight in lbs: ";
cin >> weight_lbs;

if(weight_lbs % 16 == 0){
  cout << weight_lbs << "lbs = " << weight_lbs / 16 << " lbs";
}
else{
  cout << weight_lbs << "lbs = " << weight_lbs / 16 << " lbs and "
       << weight_lbs % 16 << " oz(s)";
}


  return 0;

}
