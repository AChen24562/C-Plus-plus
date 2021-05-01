// S. Trowbridge 2020
#include <iostream>
#include <vector>                           // vector must be included

int main() {
    std::cout << std::endl;

    std::vector<int> v;                     // create a vector of integers

    std::cout << v.size() << "\n";          // output vector size
    std::cout << v.capacity() << "\n\n";    // output vector capacity

    v.push_back(1);                         // append an element
    v.push_back(2);                         // append an element
    v.push_back(3);                         // append an element
    v.push_back(4);                         // append an element
    v.push_back(5);                         // append an element

    std::cout << v.size() << "\n";          // output vector size
    std::cout << v.capacity() << "\n\n";    // output vector capacity

    for(int i=0; i<v.size(); i++) {         // iterate through a vector
        std::cout << v[i] << " ";           // overloaded [] to access vector elements
    }
    std::cout << "\n";

    for(int e: v) {                         // ranged for loop (e element, v vector)
        std::cout << e << " ";              // e references each element
    }

    std::cout << std::endl;
    return 0;
}
