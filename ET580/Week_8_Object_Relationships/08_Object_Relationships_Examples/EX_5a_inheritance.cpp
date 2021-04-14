// S. Trowbridge 2020
#include <iostream>
using namespace std;

// Is-A*******
// a Car is-a Vehicle*****

class Vehicle {                       // vehicle is a base or parent class of vehicle
public:
    Vehicle(string b): brand(b) { cout << "Vehicle constructor called. " << endl; }
    string getBrand() const { return brand; }
private:
    string brand;
};

class Car : public Vehicle {        // car is a derived or child class of vehicle
public:
    Car(string b): Vehicle(b) { cout << "Car constructor called. " << endl;  }
};

int main() {
    cout << endl;

    Vehicle v("Acura");
    cout << "\n\n";

    Car c("Lexus");
    cout << "\n\n";

    cout << "v: " << v.getBrand() << "\n";    // output a vehicle
    cout << "c: " << c.getBrand() << "\n";    // output a car using an inherited function

    cout << endl;
    return 0;
}
