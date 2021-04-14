// S. Trowbridge 2020
#include <iostream>
using namespace std;

// association  - a uses b
// 1) a node uses another node
// 3) each node can associate with multiple nodes
// 3) object lifetimes are independent (no big three)
// 4) aside from the association, objects are unrelated
class Node {
private:
    string name;                              // data
    Node *next = nullptr;                     // link to another node
public:
    Node(string id): name(id) { }             // constructor
    Node* getNext() const { return next; }    // get the next node
    void setNext(Node *n) { next = n; }       // set the next node

    friend ostream& operator<<(ostream &out, const Node &n);
};

ostream& operator<<(ostream &out, const Node &n) { return out << n.name; }

int main() {
    cout << endl;

    Node *a = new Node("A");
    Node *b = new Node("B");
    Node *c = new Node("C");
    Node *d = new Node("D");

                              // create a "chain" of linked nodes
    a->setNext(b);            // associate a with b
    b->setNext(c);            // associate b with c
    c->setNext(d);            // associate c with d

    Node *n = a;              // create a pointer to point to the first node in the chain
    while( n != nullptr ) {   // iterate until the end of the chain
        cout << *n << " ";    // print the node the n points to
        n = n->getNext();     // move the pointer to the next node in the chain
    }
    cout << "\n";

    a->setNext(c);            // change a.next to point to c
    delete b;                 // delete b

    n = a;                    // point n once again to the first node in the chain
    while( n != nullptr ) {
        cout << *n << " ";
        n = n->getNext();
    }

    cout << endl;
    return 0;
}
