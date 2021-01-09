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


  auto stop = high_resolution_clock::now(); // Stop Clock
    // Subtract start and end ctimeauto duration = duration_cast<microseconds>(stop - start);

  auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
    << duration.count() << " microseconds" << endl;
    return 0;


}
