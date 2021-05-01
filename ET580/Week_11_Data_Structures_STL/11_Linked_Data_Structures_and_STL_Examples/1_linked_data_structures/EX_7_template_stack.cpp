// S. Trowbridge 2020
#include <iostream>

template <typename T>
class Node {
public:
    Node(const T &d);
    T data;
    Node<T> *next;
};

template <typename T>
class Stack {
private:
    int size;
    Node<T> *topNode;
public:
    Stack();
    bool empty() const;
    T& top() const;
    void push(T n);
    void pop();
    void print() const;
    // big three not implemented to simplify code (normally should be implemented)
};

template <typename T>
Node<T>::Node(const T &d): data(d), next(nullptr) {
}

template <typename T>
Stack<T>::Stack(): size(0), topNode(nullptr) {
}

template <typename T>
bool Stack<T>::empty() const {
    return size == 0;
}

template <typename T>
T& Stack<T>::top() const {
    return topNode->data;
}

template <typename T>
void Stack<T>::push(T n) {
    Node<T> *temp = new Node<T>(n);
    temp->next = topNode;
    topNode = temp;
    ++size;
}

template <typename T>
void Stack<T>::pop() {
    if(empty()) { return; }
    Node<T> *temp = topNode;
    topNode = topNode->next;
    delete temp;
    --size;
}

template <typename T>
void Stack<T>::print() const {
    Node<T> *temp = topNode;
    while(temp != nullptr) {
        std::cout << *(temp->data) << " ";    // dereference node
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    Stack <int*> s;                         // stack of integer pointers

    s.push(new int(10));
    s.push(new int(20));
    s.push(new int(30));
    s.push(new int(40));
    s.push(new int(50));
    s.push(new int(60));
    s.print();
    std::cout << "\n";

    std::cout << *( s.top() ) << "\n\n";    // dereference the pointer

    std::cout << std::endl;
    return 0;
}
