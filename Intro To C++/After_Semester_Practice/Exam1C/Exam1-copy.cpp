#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <random>
#include <algorithm>
#include <chrono>
#include <vector>

using namespace std;
using namespace std::chrono;

int main(){
  auto start = high_resolution_clock::now(); // Start Clock
  // Insert Code here -->

  // #1
  float a = 5.25;
  int b = 5;
  cout << int(a/b) << endl;

  int i = 234;
  cout << i % 10 << endl;

  string phrase = "asdfg";
  // cout << "Enter a five letter word: ";
  cout << "Original Phrase: " << phrase<< endl;

  //cin >> phrase;
  if (phrase.size() == 5){
    char temp = phrase[0];
    phrase[0] = phrase[4];
    phrase[4] = temp;


    cout << "The Word is: " << phrase << endl << phrase[0];
    cout << endl << temp;
  }
  else{
    cout << "\"" << phrase << "\"" << " is not a 5 letter word";

  }
  //cin >>  phrase ;





// End of code
  auto stop = high_resolution_clock::now(); // Stop Clock
    // Subtract start and end Timeauto duration = duration_cast<microseconds>(stop - start);
  auto seconds_duration = duration_cast<seconds>(stop - start);

    cout << endl << endl << "Time taken by function: "
    << seconds_duration.count() << " second(s)";
    return 0;


}
