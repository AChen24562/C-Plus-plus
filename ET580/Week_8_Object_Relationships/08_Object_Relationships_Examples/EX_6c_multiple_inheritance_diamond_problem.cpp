// S. Trowbridge 2020
#include <iostream>
using namespace std;

//    V
//   / \
//  MV B
//  \  /
//   M

class Vehicle {                            // parent and grandparent class
public:
    Vehicle(string b): brand(b) { cout << "Vehicle" << "\n"; }
    string getBrand() const { return brand; }
private:
    string brand;
};

class MotorizedVehicle: public Vehicle  {   // child of vehicle, parent of motorcycle
public:
    MotorizedVehicle(string b, string t):
        Vehicle(b), type(t) { cout << "MotorizedVehicle " << "\n"; }
    string getType() const { return type; }
private:
    string type;
};

class Bike: public Vehicle {                 // child of vehicle, parent of motorcycle
public:
    Bike(string b, string t):
        Vehicle(b), type(t) { cout << "Bike " << "\n";  }
    string getType() const { return type; }
private:
    string type;
};

class Motorcycle : public MotorizedVehicle, public Bike {   // child of all classes
public:
    Motorcycle(string b, string t):
        MotorizedVehicle(b, t), Bike(b, t) { cout << "Motorcycle " << "\n"; }
};

int main() {
    cout << endl;

    // diamond problem: many instances required for one object
    MotorizedVehicle v("Audi", "Coupe");
    cout << "\n";

    Bike b("Giant", "Mountain Bike");
    cout << "\n";

    Motorcycle m("Ducati", "Touring");
    cout << "\n";

    cout << "v: " << v.getBrand() << " " << v.getType() << endl;
    cout << "b: " << b.getBrand() << " " << b.getType() << endl;

    // diamond problem: multiple areas of ambiguities
    // cout << "m: " << m.getBrand() << " " << m.getType() << endl;

    // diamond problem: multiple areas of ambiguities
    cout << "m: " << m.Bike::getBrand() << " " << m.Bike::getType() << endl;

    cout << endl;
    return 0;
}
