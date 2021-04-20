// S. Trowbridge 2020
#include <iostream>
using namespace std;

class Obj {                                   // an example class
private:
    string name;
public:
    Obj(string n): name(n) { }
    string getName() const { return name; }
};

template <typename T>
class Node {                                  // node objects store obj by value
public:
    Node(T e);
    T getElement() const;
    void setElement(T e);
private:
    T element;
};

template <typename T>
Node<T>::Node(T e): element(e) {
}

template <typename T>
T Node<T>::getElement() const {
    return element;
}

template <typename T>
void Node<T>::setElement(T e) {
    element = e;
}

int main() {
    cout << endl;

    int i = 5;
    char c = 'A';
    double d = 3.14;
    string s = "Hi";
    Obj o("Obj");

    Node<int> n1(i);
    Node<char> n2(c);
    Node<double> n3(d);
    Node<string> n4(s);
    Node<Obj*> n5(&o);                            // can store an object or an object pointer

    cout << n1.getElement() << "\n";
    cout << n2.getElement() << "\n";
    cout << n3.getElement() << "\n";
    cout << n4.getElement() << "\n";
    cout << n5.getElement()->getName() << "\n";   // -> operator because node contains a pointer

    cout << endl;
    return 0;
}
