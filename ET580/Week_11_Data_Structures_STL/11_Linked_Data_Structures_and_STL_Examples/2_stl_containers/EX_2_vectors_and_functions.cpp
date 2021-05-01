// S. Trowbridge 2020
#include <iostream>
#include <vector>                           // vector must be included

template<typename T>
void output(std::vector<T> v) {            // print a vector of any type.
    for(T e:v) { std::cout << e << " "; }  // print elements of type T
    std::cout << "\n";
}

void init(std::vector<int> &v) {            // initialize a vector of type int
    for(int i=0; i<20; i++) {               // store integers into the vector
        v.push_back((i+1)*5);               // push_back will append existing vector and grow
        //v[i] = (i+1)*5;                   // [] will store at location but not grow
    }
}

int main() {
    std::cout << std::endl;

    std::vector<int> v(5);                  // create a vector of size 5
    init(v);
    output(v);

    std::cout << std::endl;
    return 0;
}
