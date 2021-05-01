// S. Trowbridge 2020
#include <iostream>

class Node {
public:
    Node(const int &d);
    int data;
    Node *next;
};

class Queue {
private:
    int size;
    Node *frontNode;
    Node *backNode;
public:
    Queue();
    bool empty() const;
    int& front() const;
    int& back() const;
    void push(int n);
    void pop();
    void print() const;
    // big three should be implemented, has been omitted for simplicity
};

Node::Node(const int &d): data(d), next(nullptr) {
}

Queue::Queue(): size(0), frontNode(nullptr), backNode(nullptr) {
}

int& Queue::front() const {
    return frontNode->data;
}

int& Queue::back() const {
    return backNode->data;
}

void Queue::push(int n) {
    Node *temp = new Node(n);                   // create new node
    if(frontNode == nullptr) {                  // if queue is empty:
        frontNode = temp;                       // point frontNode to temp
        backNode = temp;                        // point backnode to temp
    } else {                                    // if queue is not empty:
        backNode->next = temp;                  // point backNode->next to temp
        backNode = temp;                        // set back to new node
    }
    ++size;                                     // increment size
}

void Queue::pop() {
    if(frontNode == nullptr) { return; }       // if queue is empty, exit function
    Node *temp = frontNode;                    // point temp to first node
    frontNode = frontNode->next;               // point frontNode to second node
    delete temp;                               // delete the original first node
    --size;                                    // decrement size
}

void Queue::print() const {
    Node *temp = frontNode;
    while(temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << std::endl;

    Queue q;

    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    q.push(600);
    q.push(700);
    q.print();
    std::cout << "\n\n";

    q.pop();
    q.pop();
    q.print();
    std::cout << "\n\n";

    std::cout << q.front() << "\n";
    std::cout << q.back() << "\n";

    std::cout << std::endl;
    return 0;
}
