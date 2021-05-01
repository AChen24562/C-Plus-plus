// S. Trowbridge 2020
#include <iostream>
#include <list> // list must be included

int main() {
    std::cout << std::endl;

    std::list<int> a;

    // insert nodes at the end of the list (normal order)
    a.push_back(20);
    a.push_back(25);
    a.push_back(30);
    a.push_back(35);

    // insert nodes in the front of the list
    a.push_front(15);
    a.push_front(10);
    a.push_front(5);

    // iterate through the list using an iterator
    for( std::list<int>::iterator i = a.begin(); i != a.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    // create an iterator object
    std::list<int>::iterator it1 = a.begin();
    // advance the iterator object to the third element
    ++it1;
    ++it1;
    // insert an element before the the third element
    a.insert(it1, 2000);


    // auto keyword
    // auto in c++11 automatically infers type (in this case a list<int>::iterator)
    for( auto i = a.begin(); i != a.end(); ++i) {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    auto it2= a.begin();
    // advance the iterator object to the fifth node
    ++it2;
    ++it2;
    ++it2;
    ++it2;
    // remove the fifth node in the linked list
    a.erase(it2);

    for( auto i = a.begin(); i != a.end(); ++i) {
        std::cout << *i << " ";
    }

    std::cout << std::endl;
    return 0;
}
