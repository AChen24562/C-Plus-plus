#include <iostream>
#include <ctime>

using namespace std;


int main(){

srand(time(NULL));

for(int i =0; i <50; i++){
  cout << rand() % 90 + 10 << " ";
}


  return 0;
}
