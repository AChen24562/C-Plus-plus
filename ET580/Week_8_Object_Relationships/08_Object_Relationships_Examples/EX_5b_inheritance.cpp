// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle { // BASE OR PARENT CLASS
public:
    Vehicle(string b): brand(b) { }
    string getBrand() const { return brand; }
private:
    string brand;
};

class Car : public Vehicle { // DERIVED OR CHILD
public:
    Car(string b, int nd): Vehicle(b), numDoors(nd) { }
    int getNumDoors() const { return numDoors; }      // function unique to Car
private:
    int numDoors;                                     // data unique to Car
};


int main() {
    cout << endl;

    Vehicle v("Acura");
    Car c("Lexus",2);

    cout << "v: " << v.getBrand() << endl;

    cout << "c: " << c.getBrand() << " " << c.getNumDoors() << "-doors" << endl;

    cout << endl;
    return 0;
}
