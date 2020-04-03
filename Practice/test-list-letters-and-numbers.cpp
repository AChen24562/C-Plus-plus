#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "Enter a number (1 - 26): ";
  cin >> num;
char letter = 65;
do{

if(num >= 1 && num <=26){
  break;
}
else{
  cout << "That number is not between 1 - 26. Try again. ";
  cin >> num;
}

}while(true);

for(int i = 1; i <=num; i++){
cout << letter ++ << i;
cout << endl;

}


  return 0;
}
