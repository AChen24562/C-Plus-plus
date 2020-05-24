// (c) S. Trowbridge, J. Sun
// Ex d - stringstream file parsing 2

#include <iostream>
#include <string>
#include <iomanip>  // Support for output format (setw etc.).
#include <sstream>  // Support for stringstream text parsing.
#include <fstream>  // Support for file input and output.
using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(2);

  ifstream fin("SampleCSVNumbers.txt");
  ofstream fout("output.txt");

  double price, total = 0.0;       // Variables to store item cost and calculate total cost.
  int position = 0;                // Variable to track the token position in the string (zero indexed).

  string line, token;
  while(getline(fin, line))        // Read one line at a time, until end of file.
  {
    istringstream parser(line);        // Associate a stringstream object with the recently read line.
    position = 0;                    // Reset position for the next line.
    while(getline(parser, token, ',')) // Parse the line for each data token separated by commas.
    {
        // Output token with proper spacing.
        if (position == 0){
            //cout << left << setw(25) << token;
            fout << left << setw(25) << token;
        }
        else {
            //cout << right << setw(10) << token;
            fout << right << setw(10) << token;
        }
         // If current position is the second token, convert token to double and add to total.
        if(position == 1) {
            istringstream converter(token);  // Associate new stringstream object with token.
            converter >> price;              // Convert token string to double, store in price.
            total += price;                  // Add current price to total.
        }

        position++;                          // Increment position to next token position.
    }
    //cout << endl;
    fout << endl;
  }
  //cout << "----------------------------------------";
  fout << "----------------------------------------";
  //cout << endl << left << setw(25) << "Total:";
  fout << endl << left << setw(25) << "Total:";
  //cout << right << setw(10) << total << endl;
  fout << right << setw(10) << total << endl;

  fin.close();
  fout.close();
  return 0;
}
