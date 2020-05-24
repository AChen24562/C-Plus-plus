#include <iostream>
using namespace std;

int main(){
  double num;
  cout << "Enter an integer: ";
  cin >> num;


do{
  if(num == (float)(int)num){
    cout << "Number is an integer" << endl;
    if(num > 0){
      cout << "number is postive" << endl;
      break;
    }
    else
    cout << "Numer is not positive" << endl;
}
else
    cout << "Number is not an integer" << endl;

    cout << "Enter an integer: ";
    cin >> num;

}while(true);
cout << "It works." << endl;







  return 0;
}
