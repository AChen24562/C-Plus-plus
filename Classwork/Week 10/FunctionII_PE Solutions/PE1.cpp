// (c) S. Trowbridge & J. Sun
// Function II - PE

#include <iostream>
#include <cstdlib>
using namespace std;

//factor() is void because validation is displayed in the body
void factors(int);

int main() {
    int n;
    do {
        cout << "\nEnter a positive integer\n"
             << "(or enter zero to end): ";
        cin >> n;
        cout << endl;
        if (n == 0){
            cout << "Zero is entered.  Exiting Program...\n\n";
            exit(0);
        }
        cout << "The factors of n are: ";
        factors(n);
    }while (true);

    cout << endl;
    return 0;
}

void factors(int number) {
    for(int i=1; i<=number; i++){
        if(number%i == 0)
            cout << i << " ";
    }
}
