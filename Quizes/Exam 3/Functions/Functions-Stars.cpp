#include <iostream>
using namespace std;



  void outputStars(int n) {
    int digit;
      if(n<10) {
        for(int i =0; i <n; i ++){
          cout << "* " ;
        }
        cout << endl;
      }
      else {
          digit = n%10;
          outputStars(n/10);
          for(int i =0; i <digit; i ++){
            cout << "* " ;
          }
          cout << endl;

      }
  }

 int main(){
   int n  =1543;

   outputStars(n);




   return 0;
 }
