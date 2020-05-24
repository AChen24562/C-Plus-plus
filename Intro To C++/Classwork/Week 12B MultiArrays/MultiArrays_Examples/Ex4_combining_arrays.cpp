// (c) 2018 S. Trowbridge
// Ex 4a - combining arrays

#include <iostream>
#include <string>
using namespace std;

const int TYPES = 3;
const int BRANDS = 4;

// Data can be stored across multiple arrays that are related to each other.
// This function accepts a one dimensional and two dimensional array
// of types of drinks, and common brands for each type.
void output(const string drinks[], const string brands[][BRANDS]);

int main( ) {
    // One dimensional array of types of drinks.
    string drinks[TYPES];

    drinks[0] = "Water";
    drinks[1] = "Soda";
    drinks[2] = "Liquor";

    // Two dimensional array of drink brands (of each type).
    // This array corresponds to the 'drinks' array.
    string brands[TYPES][BRANDS];

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

    output(drinks, brands);

    cout << endl;
    return 0;
}

void output(const string drinks[], const string brands[][BRANDS]) {
    for(int a=0; a<TYPES; a++) {
        cout << drinks[a] << ": ";
        for(int i=0; i<BRANDS; i++)
            cout << brands[a][i] << " ";
        cout << endl << endl;
    }
}
