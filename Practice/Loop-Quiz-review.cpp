#include <iostream>
using namespace std;

int main(){

double m;
cout << "\n \n 0 - m using for loop" << endl
     << "------------------------" << endl
     << "Enter an integer number: ";
     cin >> m;
     if (m == static_cast<int>(m)){
     for (int i =m; i > -1; i--)
        cout << i << " ";

   } else {
     cout << "An integer is required. Invalid input. \n\n";
   }




cout << endl;



  return 0;
}
