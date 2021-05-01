// S. Trowbridge 2020
#include <iostream>

class Node {                                // public external node class to simplify code
public:
    Node(const int &d);
    int data;
    Node *next;
};

class Stack {
private:
    int size;
    Node *topNode;                          // top node which will chain other nodes
public:
    Stack();
    bool empty() const;
    int& top() const;
    void push(int n);
    void pop();
    void print() const;
    // big three not implemented to simplify code (normally should be implemented)
};

Node::Node(const int &d): data(d), next(nullptr) {
}

Stack::Stack(): size(0), topNode(nullptr) {
}

bool Stack::empty() const {
    return size == 0;
}

int& Stack::top() const {
    return topNode->data;
}

void Stack::push(int n) {
    Node *temp = new Node(n);               // create a new node
    temp->next = topNode;                   // point node next to topNode
    topNode = temp;                         // seint topNode to new node
    ++size;                                 // incremenint size
}

void Stack::pop() {
    if(topNode == nullptr) { return; }      // stack empty, exit function
    Node *temp = topNode;                   // backup topNode
    topNode = topNode->next;                // set topNode to next node in chain
    delete temp;                            // delete original topNode
    --size;                                 // decrement size
}

void Stack::print() const {
    Node *temp = topNode;                   // backup topNode
    while(temp != nullptr) {                // repeat until 2nd to last node
        std::cout << temp->data << " ";     // output node data
        temp = temp->next;                  // move to next node in chain
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    Stack s;                                // create a stack object

    s.push(10);                             // push elements onto stack in LIFO order
    s.push(20);                             // LIFO - last-in-first-out
    s.push(30);                             // FILO - first-in-last-out
    s.push(40);
    s.push(50);
    s.push(60);

    s.print();
    std::cout << "\n";

    s.pop();                                // remove elements from stack
    s.pop();

    s.print();
    std::cout << "\n";

    std::cout << std::endl;
    return 0;
}
