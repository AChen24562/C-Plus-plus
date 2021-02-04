// S. Trowbridge 2020
#include <iostream>
using namespace std;

const int TYPES = 3;                            // global constant, global scope
const int BRANDS = 4;

void print(string drinks[], string brands[][BRANDS]) {
    for(int i=0; i<TYPES; i++) {                // iterate through a 1d and 2d array
        cout << drinks[i] << ": ";              // print 1d array elements
        for(int j=0; j<BRANDS; j++) {
            cout << brands[i][j] << " ";        // print 2d array elements
        }
        cout << "\n";
    }
}

int main( ) {
    cout << endl;

    string drinks[TYPES];                       // 1d array

    drinks[0] = "Water";
    drinks[1] = "Soda";
    drinks[2] = "Alcohol";

    string brands[TYPES][BRANDS];               // 2d array where first dimension matches 1d array

    brands[0][0] = "Avian";
    brands[0][1] = "Aquafina";
    brands[0][2] = "Poland";
    brands[0][3] = "Nestle";

    brands[1][0] = "Coke";
    brands[1][1] = "Pepsi";
    brands[1][2] = "Sprite";
    brands[1][3] = "Gingerale";

    brands[2][0] = "Vodka";
    brands[2][1] = "Tequilla";
    brands[2][2] = "Gin";
    brands[2][3] = "Whiskey";

    print(drinks, brands);

    cout << endl;
    return 0;
}
