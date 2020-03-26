// J. Sun
//Week 8 - PE creating functions with parameters

#include <iostream>
using namespace std;

char myletter(int x, int y) {
    if (x > y)
        return 'B';
    else if (x < y)
        return 'S';
    else
        return 'E';
}


int main( ) {
    int attempt = 3;
    int a, b;
    for(int i =0; i <attempt; i++){
    cout << "Enter two integers (separated by a space): ";
    cin >> a >> b;
    cout << endl;

    cout << "My letter is " << myletter(a,b) << "." << endl;
}
    //cout << "My letter is " << myletter(10,9) << "." << endl;


    cout << endl;
    return 0;
}
