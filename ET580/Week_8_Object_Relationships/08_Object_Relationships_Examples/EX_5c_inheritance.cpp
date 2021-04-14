// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle(string b): brand(b) { cout << "vehicle constructor" << "\n"; }
    string getBrand() const { return brand; }
private:
    string brand;
};

class Car : public Vehicle {
public:
    Car(string b, int nd): Vehicle(b), numDoors(nd) { cout << "car constructor" << "\n"; }
    int getNumDoors() const { return numDoors; }      // function unique to Car
private:
    int numDoors;                                     // data unique to Car
};

class Boat : public Vehicle {        // boat is a derived or child class of vehicle
public:
    Boat(string b, int len): Vehicle(b), hullLength(len) { cout << "boat constructor" << "\n"; }
    int getHullLength() const { return hullLength; }  // function unique to Boat
private:
    int hullLength;                                   // data unique to Car
};

int main() {
    cout << endl;

    Vehicle v("Acura");
    cout << "\n\n";
    Car c("Lexus",2);
    cout << "\n\n";
    Boat b("Baja",45);
    cout << "\n\n";

    cout << "v: " << v.getBrand() << endl;
    cout << "c: " << c.getBrand() << " " << c.getNumDoors() << " door" << endl;
    cout << "b: " << b.getBrand() << " " << b.getHullLength() << "ft" << endl;

    cout << endl;
    return 0;
}
