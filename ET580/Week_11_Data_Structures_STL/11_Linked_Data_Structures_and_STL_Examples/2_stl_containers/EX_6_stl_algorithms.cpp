// S. Trowbridge 2020
#include <iostream>
#include <vector>                                 // vector must be included
#include <algorithm>                              // stl algorithm library

int main() {
    std::cout << std::endl;

    std::vector<int> v;                           // create a vector
    v.push_back(93);                              // append element
    v.push_back(25);                              // append element
    v.push_back(7);                               // append element
    v.push_back(62);                              // append element
    v.push_back(34);                              // append element
    v.push_back(45);                              // append element

    for(int e: v) { std::cout << e << " "; }      // print the vector
    std::cout << "\n";

    // http://www.cplusplus.com/reference/algorithm/
    std::sort( v.begin(), v.end());               // stl sort algorithm
    std::replace( v.begin(), v.end(), 62, 6200 ); // stl replace element algorithm

    for(int e: v) { std::cout << e << " "; }      // print the vector

    std::cout << std::endl;
    return 0;
}
