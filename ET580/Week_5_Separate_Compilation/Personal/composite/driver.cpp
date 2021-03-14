// (c) S. Trowbridge 2019
// ex4 application

#include "Person.h"

int main() {
    cout << endl;

    Person p1{ 50,"John Smith", 200, "Professor"};
    p1.output();

    Person p2{ 50,"John Smith"};
    p2.output();

    cout << endl;
    return 0;
}
