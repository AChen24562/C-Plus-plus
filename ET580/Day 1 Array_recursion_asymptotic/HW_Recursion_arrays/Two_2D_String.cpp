#include <iostream>

using namespace std;

const int TYPES = 3;
const int BRANDS = 4;

void print(string drinks[], string brands[][BRANDS]){
  for(int i =0; i <TYPES; i++){
    cout << drinks[i] << ": ";
    for(int j =0; j <BRANDS; j++){
      cout << brands[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
  string drinks[TYPES];
  // Filling 1-D Array
  drinks[0] = "Water";
  drinks[1] = "Soda";
  drinks[2] = "Alcohol";

  string brands[TYPES][BRANDS];
  // filling 2-D array
  brands[0][0] = "Avian";
  brands[0][1] = "Aquafina";
  brands[0][2] = "Poland Spring";
  brands[0][3] = "Nestle";

  brands[1][0] = "Coke";
  brands[1][1] = "Pepsi";
  brands[1][2] = "Sprite";
  brands[1][3] = "Gingerale";

  brands[2][0] = "Vodka";
  brands[2][1] = "Tequilla";
  brands[2][2] = "Gin";
  brands[2][3] = "Whiskey";

  // Print 1D array with 2D array
  print(drinks, brands);
  return 0;

}
