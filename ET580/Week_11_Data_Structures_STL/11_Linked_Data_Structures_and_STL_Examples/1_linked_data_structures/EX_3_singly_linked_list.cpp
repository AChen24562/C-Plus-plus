// S. Trowbridge 2020
#include <iostream>

class Node {                  // public external node class to simplify code
public:
    int data;                 // data to store
    Node *next;               // point to the next node
    Node(const int &d);
};

class LList {
private:
    Node *head;               // start of the link list
    Node *tail;               // end of the link list
    int size;
public:
    LList();
    bool empty();
    int getSize() const;
    void push_back(int n);
    void push_front(int n);
    void pop_front();
    void pop_back();
    void insert(int d, int n);
    void erase(int d);
    void print() const;
    // big three not implemented to simplify code (normally should be implemented)
};

Node::Node(const int &d): data(d), next(nullptr) {
}

LList::LList(): head(nullptr), tail(nullptr), size(0) {
}

bool LList::empty() {
    return head == nullptr;
}

int LList::getSize() const {
    return size;
}

void LList::push_front(int n) {                 // insert node before head
    Node *temp = new Node(n);                   // create a new node
    if(head == nullptr) {                       // if the list is empty,
        tail = temp;                            // point tail to the new node
    } else {                                    // if the list is not empty,
        temp->next = head;                      // point temp.next to the first node
    }
    head = temp;                                // point head to the new node
    ++size;                                     // increment size of list
}

void LList::push_back(int n) {                  // insert node after tail
    if(head == nullptr) {                       // if list is empty
        push_front(n);                          // call push_front then exit function
        return;
    }
    Node *temp = new Node(n);                   // create a new node
    tail->next = temp;                          // point last node to the new node
    tail = temp;                                // point tail to the new node
    ++size;                                     // increment size of list
}

void LList::pop_front() {                       // remove head node
    if(head == nullptr) { return; }             // if list is empty, exit function
    Node *temp = head;                          // point temp to the first node
    head = head->next;                          // move head to the second node (making it first node)
    delete temp;                                // delete original first node
    --size;                                     // decrement the size of list
}

void LList::pop_back() {                        // remove tail node
    if(head == nullptr) { return; }             // if list is empty, exit function
    if(head == tail) {                          // if list has one node
        delete head;                            // delete node
        head = tail = nullptr;                  // point head and tail to nullptr (empty list)
        return;                                 // exit function
    }
    Node *prev = head;                          // point prev to first node
    Node *current = head->next;                 // point current to second node
    while(current->next != nullptr) {           // traverse until current is last node, prev is second to last node
        prev = prev->next;                      // advance prev
        current = current->next;                // advance current
    }
    prev->next = nullptr;                       // point second to last node to nullptr
    tail = prev;                                // point tail to new last node
    delete current;                             // delete the original last node
    --size;                                     // decrement size
}

void LList::insert(int d, int n) {              // insert a node before element d
    if(head == nullptr) { return; }             // list is empty, exit function
    if(head->data == d) {                       // if first node is d
        push_front(n);                          // insert element before first
        return;
    }

    Node *prev = head;                          // set prev to first node
    Node *current = head->next;                 // set current to second node
    while(current != nullptr && current->data != d) { // traverse until end of list or d is found
        prev = prev->next;                      // advance prev to node before d
        current = current->next;                // advance current to d
    }
    if(current != nullptr) {                    // if d was found
        Node *temp = new Node(n);               // create a new node
        prev->next = temp;                      // point prev->next to temp
        temp->next = current;                   // point temp->next to d
        ++size;                                 // increment size
    }
}

void LList::erase(int d) {                      // remove element e
    if(head == nullptr) { return; }             // list is empty, exit function
    if(head->data == d) {                       // if head is the element, call pop_front
        pop_front();
        return;
    } else if(tail->data == d) {                // if tail is the element, call pop_back
        pop_back();
        return;
    }

    Node *prev = head;                          // set prev to first node
    Node *current = head->next;                 // set current to second node
    while(current != nullptr && current->data != d) { // traverse until end of list or d is found
      prev = prev->next;                        // advance prev to node before d
      current = current->next;                  // advance current to d
    }
    if(current != nullptr) {                    // if d was found
        prev->next = current->next;             // point prev->next to current->next (skip node d)
        delete current;                         // delete d
        --size;                                 // decrement size of list
    }
}

void LList::print() const {                     // non-member print function
    Node *current = head;                       // create a node, point it to head
    while(current != nullptr) {                 // repeat until we reach the end of list
        std::cout << current->data << " ";      // print the content of the current node
        current = current->next;                // move current to point to the next node in the list
    }
}

int main() {
    std::cout << std::endl;

    LList list;

    list.push_back(700);                        // append 700 (store at end)
    list.push_back(900);                        // append 900
    list.push_back(1100);                       // append 1100
    list.push_front(300);                       // prepend 300 (store at beginning)
    list.push_front(100);                       // prepend 100
    list.push_front(50);                        // prepend 50
    list.print();
    std::cout << "\n\n";

    list.pop_front();
    list.pop_back();
    list.print();
    std::cout << "\n\n";

    list.insert(100, 50);                       // insert 50 before 100
    list.insert(700, 500);                      // insert 500 before 700
    list.insert(900, 800);                      // insert 800 before 900
    list.insert(1000, 5150);                    // 1000 is not in list, no insert occurs
    list.print();
    std::cout << "\n\n";

    list.erase(50);                             // erase 50
    list.erase(500);                            // erase 500
    list.erase(9999);                           // node does not exist
    list.print();

    std::cout << std::endl;
    return 0;
}
