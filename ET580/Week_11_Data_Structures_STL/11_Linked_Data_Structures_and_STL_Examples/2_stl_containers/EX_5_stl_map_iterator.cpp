// S. Trowbridge 2020
#include <iostream>
#include <map> // list must be included

int main() {
    std::cout << std::endl;

    std::map<int, std::string> direction;

    direction.insert(std::make_pair(0, "Forward"));
    direction.insert(std::make_pair(1, "Backward"));
    direction.insert(std::make_pair(2, "Left"));
    direction.insert(std::make_pair(3, "Right"));

    // iterator for traversing our map
    std::map<int, std::string>::const_iterator iter;
    iter = direction.begin();

    std::cout << "Map: " << std::endl;
    while(iter != direction.end()) {
        std::cout << iter->first << " " << iter->second << std::endl; // key/value first/second pairing
        iter++;
    }
    std::cout << std::endl;

    // ranged based for loop for traversing our map
    std::cout << "Map: " << std::endl;
    for(std::pair<int, std::string> e: direction) {
        std::cout << e.first << " " << e.second << std::endl;
    }
    std::cout << std::endl;

    std::cout << std::endl;
    return 0;
}
