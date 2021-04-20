// S. Trowbridge 2020
#include <iostream>
using namespace std;

template<typename T>
class ID {                                      // base class
protected:
    T idVal;
public:
    ID() = default;
    ID(T v): idVal(v) {}
    T getId() const { return idVal; }
    virtual void output() const { cout << idVal << "\n"; }
};

template<typename T>
class EmployeeID : public ID<T> {               // derived class
public:
    EmployeeID() = default;
    EmployeeID(T n): ID<T>(n) {}
};

template<typename T, typename U>
class ManagerID : public ID<T> {                // derived class
private:
    U title;                                    // introduce a second template type
public:
    ManagerID() = default;
    ManagerID(T n, U t): ID<T>(n), title(t) {}
    void output() const override {              // scope idVal
        cout << ManagerID<T,U>::idVal <<  " " << title << "\n"; // note ManagerID<T,U> type
    }
};

template<typename T>                            // non-member function
void print(const ID<T> &id) {                   // polymorphism by passing ID by reference
    id.output();
}

int main() {
    cout << endl;

    ID<int> **ids = new ID<int>*[4];            // array of template ID objects
    ids[0] = new EmployeeID<int>(3632);
    ids[1] = new EmployeeID<int>(4142);
    ids[2] = new ManagerID<int, string>(6269, "CEO");
    ids[3] = new ManagerID<int, char>(7383, 'A');

    for(int i=0; i<4; ++i) {
        print( *(ids[i]) );                     // dereference argument
    }

    cout << endl;
    return 0;
}
