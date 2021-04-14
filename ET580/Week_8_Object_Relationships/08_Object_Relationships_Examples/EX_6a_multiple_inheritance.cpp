// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string m): motor(m) { cout << "Vehicle" << "\n"; }
    string getMotor() const { return motor; }
private:
    string motor;
};

class Bike {
public:
    Bike(string t): type(t)  { cout << "Bike" << "\n"; }
    string getType() const { return type; }
private:
    string type;
};

class Motorcycle : public Vehicle, public Bike { // child of two parents
public:
    Motorcycle(string m, string t):
        Vehicle(m),
        Bike(t)  { cout << "Motorcycle" << "\n"; }
};

int main() {
    cout << endl;

    Vehicle v("4-Cylinder");
    Bike b("Mountain Bike");
    cout << "\n";

    Motorcycle m("Touring", "2-Cylinder");
    cout << "\n";

    cout << "v: " << v.getMotor() << endl;
    cout << "b: " << b.getType() << endl;
    cout << "m: " << m.getMotor() << " " << m.getType() << endl;

    cout << endl;
    return 0;
}
