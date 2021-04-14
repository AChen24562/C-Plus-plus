// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string *brand;
public:
    Vehicle(): Vehicle("Brand") { }
    Vehicle(string b): brand(new string(b)) { }
    string getBrand() const { return *brand; }
    void output() const { cout << *brand << endl; }

    Vehicle(const Vehicle &v) {             // copy constructor
        cout << "==> vehicle: copy constructor called. " << endl;
        brand = new string(*(v.brand));
    }
    Vehicle& operator=(const Vehicle &v) {  // assignment operator overload
        cout << "==> vehicle: assignment overload called. " << endl;
        if(this != &v) {
            *brand = *(v.brand);
        }
        return *this;
    }
    ~Vehicle() {                            // destructor
        delete brand;
    }
};

class Car : public Vehicle {
private:
    int *numDoors;
public:
    Car(): Car("Brand", 0) { }
    Car(string b, int nd): Vehicle(b), numDoors(new int(nd)) { }
    int getNumDoors() const { return *numDoors; }
    void output() const { cout << *brand << " " << *numDoors << "-door" << endl; }

    Car(const Car &c):                        // copy constructor
        Vehicle(c),                           // initialize vehicle object
        numDoors( new int(*(c.numDoors)) ) {
        cout << "==> car: copy constructor called. " << endl;
    }
    Car& operator=(const Car &c) {            // assignment operator overload
        cout << "==> car: assignment overload called. " << endl;
        if(this != &c) {
            Vehicle::operator=(c);            // call the vehicle assignment operator
            *numDoors = *(c.numDoors);
        }
        return *this;
    }
    ~Car() {                                  // destructor
        delete numDoors;
    }
};

int main() {
    cout << endl;

    Vehicle v1("Acura");
    Vehicle v2("BMW");
    Vehicle v3 = v2;

    v1.output();
    v2.output();
    v3.output();
    cout << "\n\n";

    Car c1("Lexus",2);
    Car c2("Audi",3);
    Car c3 = c2;

    c1.output();
    c2.output();
    c3.output();
    cout << "\n\n";

    v3 = c2;
    v3.output();

    cout << endl;
    return 0;
}
