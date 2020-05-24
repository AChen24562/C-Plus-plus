// J. Sun
//Week 8 - PE creating user defined function with return value

#include <iostream>
using namespace std;

bool isValid (int x){
  return(x>=1 && x <=575);
}

void exit();

int main() {
    int n;

    // similar to hw
  do{
    cout << "Enter an integer (Or use 'Zero 0' to exit): ";
    cin >> n;
//if (n==0)
//break;

    if (isValid(n))
        cout << "The number is in the range.\n";
    else
        cout << "The number is NOT in the range.\n";

}while(n != 0); // if n != 0 program will continue running
// while(true);

    exit();

    cout << endl;
    return 0;
}


void exit(){
    cout << "\n\nEXIT PROGRAM. GOODBYE!" << endl;
}
