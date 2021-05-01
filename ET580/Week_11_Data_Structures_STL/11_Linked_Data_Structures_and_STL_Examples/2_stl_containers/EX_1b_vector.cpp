// S. Trowbridge 2020
#include <iostream>
#include <vector>                             // vector must be included

int main() {
    std::cout << std::endl;

    std::vector<int> v;                       // create a vector

    v.push_back(5);                           // append element
    v.push_back(10);                          // append element
    v.push_back(15);                          // append element
    v.push_back(20);                          // append element

    for(int e: v) { std::cout << e << " "; }  // print the vector
    std::cout << "\n";

    std::cout << v.front() << "\n";           // output first element
    std::cout << v.back() << "\n\n";          // output last element

    v.pop_back();                             // delete last element

    for(int e: v) { std::cout << e << " "; }  // print the vector

    std::cout << std::endl;
    return 0;
}
