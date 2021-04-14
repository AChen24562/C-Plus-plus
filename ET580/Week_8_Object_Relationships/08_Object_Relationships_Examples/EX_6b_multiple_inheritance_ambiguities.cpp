// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string b): brand(b) { cout << "Vehicle" << "\n"; }
    string getBrand() const { return brand; }
private:
    string brand;
};

class Bike {
public:
    Bike(string b): brand(b) { cout << "Bike" << "\n"; }
    string getBrand() const { return brand; }
private:
    string brand;
};

class Motorcycle : public Vehicle, public Bike {
public:
    Motorcycle(string b):
        Vehicle(b), Bike(b) { cout << "Motorcycle" << "\n"; }
};

int main() {
    cout << endl;

    Vehicle v("Audi");
    Bike b("Giant");
    cout << "\n";

    Motorcycle m("Ducati");
    cout << "\n";

    cout << "v: " << v.getBrand() << "\n";
    cout << "b: " << b.getBrand() << "\n";

    // ambiguous function calls: which brand variable?
    // cout << "m: " << m.getBrand() << "\n";

    // ambigous function calls fixed by scope resolution
     cout << "m: " << m.Bike::getBrand() << "\n";

    cout << endl;
    return 0;
}
