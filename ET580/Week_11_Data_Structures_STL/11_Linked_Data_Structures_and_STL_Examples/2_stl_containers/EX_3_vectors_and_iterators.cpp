// S. Trowbridge 2020
#include <iostream>
#include <vector>                           // vector must be included

int main() {
    std::cout << std::endl;

    std::vector<char> v;                        // create a vector of characters
    for(int i=0; i<26; i++) {
        v.push_back(i+65);                 // store the uppercase alphabet
    }
    for(char c: v) {                       // print the vector
        std::cout << c << " ";
    }
    std::cout << std::endl;

    std::vector<char>::const_iterator iter;     // read only iterator for a vector of characters
    iter = v.begin();                      // assign iterator to the first vector element

    while( iter != v.end() ) {             // while iterator is not at the end of the vector
        std::cout << *iter  << " ";             // dereference the iterator and print its value
        iter++;                            // increment iterator to the next object
    }

    std::cout << std::endl;
    return 0;
}
