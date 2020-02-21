#include <iostream>
#include <string>
using namespace std;

int main(){
  //Quiz Review
  /* string topic = "Monday Quiz";
  cout << topic << endl;
  cout << topic.length() << endl;
  cout << topic[7] << endl;
  cout << topic.substr(0,6); */



// Turning upper to lowercase
 char c;
 int i;


 cout << "Please enter an upercase character: ";
 cin >> c;
 cout << endl;

 /* i = static_cast<int>(c);
    i = i + 32;
    c = static_cast<char>(i);

    cout << c << endl; */

  //cout << endl << static_cast<char>(static_cast<int>(c) +32 );

  cout << "The lowercase of this letter is: " <<  (c+=32);

 cout << endl;


  return 0;
}
