#include <iostream>
using namespace std;

int main(){
// all even numbers from 0 to 20
cout << "\n While Loop"
     << "\n -------------- \n";

int i = 9;

while(i >= 1){
  cout << i << endl;
  i --;

}

cout << "For Loop\n-------------" << endl;

for(int a = 1; a <= 20; a+=2)
  cout << a << endl;

cout << "Non multiples of 3 from 10 - 30\n-----------" << endl;
for (int i =11;  i < 30; i++){
  if (i % 3 != 0)
    cout << i << endl;
}







  return 0;
}
