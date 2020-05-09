#include <iostream>
#include <ctime>
using namespace std;

void digitExtraction(int random){
  if(random<10) {
      cout << random << "\t";
  }
  else {
      // 1234
      digitExtraction(random/10);
      cout << random%10 << "\t";
      //4321
      //digitExtraction(random/10);

  }


}



int main(){
  srand(time(NULL));

  int random = rand() %200 +1;

  cout <<"The random number is: " << random << endl;
  cout << "The digits of this number are: ";
  digitExtraction(random);



  return 0;
}
