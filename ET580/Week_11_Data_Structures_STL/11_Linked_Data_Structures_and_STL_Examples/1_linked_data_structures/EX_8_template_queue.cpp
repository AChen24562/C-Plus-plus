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
class Queue {
public:
    Queue();
    bool empty() const;
    T front() const;
    T back() const;
    void push(T n);
    void pop();
    void print() const;
    // big three should be implemented, has been omitted for simplicity
private:
    int size;
    Node<T> *frontNode;
    Node<T> *backNode;
};

template <typename T>
Node<T>::Node(const T &d): data(d), next(nullptr) {
}

template <typename T>
Queue<T>::Queue(): size(0), frontNode(nullptr), backNode(nullptr) {
}

template <typename T>
T Queue<T>::front() const {
    return frontNode->data;
}

template <typename T>
T Queue<T>::back() const {
    return backNode->data;
}

template <typename T>
void Queue<T>::push(T n) {
    Node<T> *temp = new Node<T>(n);
    if(size == 0) {
        frontNode = temp;
        backNode = temp;
    } else {
        backNode->next = temp;
        backNode = temp;
    }
    ++size;
}

template <typename T>
void Queue<T>::pop() {
    if(size == 0) { return; }
    Node<T> *temp = frontNode;
    frontNode = frontNode->next;
    delete temp;
    --size;
}

template <typename T>
void Queue<T>::print() const {
    Node<T> *temp = frontNode;
    while(temp != nullptr) {
        std::cout << *(temp->data) << " ";    // dereference node
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    Queue<int*> q;
    q.push(new int(100));
    q.push(new int(200));
    q.push(new int(300));
    q.push(new int(400));
    q.push(new int(500));
    q.push(new int(600));
    q.push(new int(700));

    q.print();
    std::cout << std::endl;

    q.pop();
    q.pop();

    q.print();
    std::cout << std::endl;

    std::cout << *(q.front()) << std::endl;
    std::cout << *(q.back()) << std::endl;

    std::cout << std::endl;
    return 0;
}
