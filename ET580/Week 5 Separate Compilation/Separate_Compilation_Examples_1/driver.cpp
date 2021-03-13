// (c) S. Trowbridge 2019
// ex1 separate compilation application

#include "Person.h"

int main() {
    cout << endl;

    Person p1{};
    p1.setName("John Smith");
    p1.setAge(20);
    p1.output();

    cout << endl;
    return 0;
}
