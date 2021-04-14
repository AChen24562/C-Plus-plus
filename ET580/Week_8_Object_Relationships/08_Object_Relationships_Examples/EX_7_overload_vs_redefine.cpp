// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle {
private:
    string brand;
public:
    Vehicle(string b): brand(b) { }
    string getBrand() const { return brand; }
    void output() const { cout << brand << "\n"; }
};

class Car : public Vehicle { // car is-a vehicle
private:
    int numDoors;
public:
    Car(string b, int nd): Vehicle(b), numDoors(nd) { }
    int getNumDoors() const { return numDoors; }

    void output() const {           // redefined output function, different body
        cout << getBrand() << " " << numDoors << "-door" << "\n";
    }
    void output(string n) const {   // overloaded output function, different parameter list
        cout << n << " - " << getBrand() << " " << numDoors << "-door" << "\n";
    }
};

int main() {
    cout << endl;

    Vehicle v("Acura");
    Car c("Lexus",2);

    v.output();                   // vehicle calls overload
    c.output();                   // car calls redefined overload
    c.output("Mike's Car");       // car calls overloaded overload
    c.Vehicle::output();          // car calls original vehicle function

    cout << endl;
    return 0;
}
