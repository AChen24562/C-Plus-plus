// S. Trowbridge 2020
#include <iostream>

class DNode {                 // public external node class to simplify code
public:
    DNode(const int &d);
    int data;
    DNode *next;              // next points to the next node in a list
    DNode *prev;              // prev points to the previous node in a list
};

class DLList {
private:
    DNode *head;
    DNode *tail;
    int size;
public:
    DLList();// Done
    bool empty(); // done
    int getSize() const; // done
    DNode* front(); // done
    DNode* back(); //done
    void push_back(int n); // done
    void push_front(int n);// done
    void pop_front();// done
    void pop_back();// done
    void insert(int d, int n);//done
    void insert(DNode *d, int n);//done
    void erase(int e);// done
    void erase(DNode *d);// done
    void print() const; // done
    void printRev() const;
    // big three not implemented to simplify code (normally should be implemented)
};

DNode::DNode(const int &d): data(d), next(nullptr), prev(nullptr) {
}

DLList::DLList(): head(nullptr), tail(nullptr), size(0) {
}

bool DLList::empty() {
    return head == nullptr;
}

int DLList::getSize() const {
    return size;
}

DNode* DLList::front() {                        // return head pointer
    return head;
}

DNode* DLList::back() {                         // return back pointer
    return tail;
}

void DLList::push_front(int n) {
    DNode *temp = new DNode(n);
    if(head == nullptr) {
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;                      // point head.prev to new node (inserts node before head)
    }
    head = temp;
    ++size;
}

void DLList::push_back(int n) {
    if(head == nullptr) {
        push_front(n);
        return;
    }
    DNode *temp = new DNode(n);
    tail->next = temp;
    temp->prev = tail;                          // point temp.prev to original last node (inserts node after tail)
    tail = temp;
    ++size;
}

void DLList::pop_front() {
    if(head == nullptr) { return; }
    DNode *temp = head;
    head = head->next;
    delete temp;
    if(head != nullptr) {                       // if at least one node exists,
        head->prev = nullptr;                   // point head.prev to nullptr
    }
    --size;
}


void DLList::pop_back() {                       // O(1) in doubly versus O(n) in singly
    if(head == nullptr) { return; }
    else if(head == tail) {
        pop_front();
        return;
    }
    DNode *temp = tail;                         // point temp to tail
    tail = tail->prev;                          // point tail to second to last node
    tail->next = nullptr;                       // point new tail->next to nullptr (second to last node becomes the last node)
    delete temp;                                // delete the original tail
    --size;                                     // decrement size
}

void DLList::insert(int d, int n) {             // insert before d by searching for node containing d: O(n)
    if(head == nullptr) { return; }
    if(head->data == d) {                       // insert new head
        push_front(n);
        return;
    }
    if(tail->data == d) {                       // insert new tail
        push_back(n);
        return;
    }

    DNode *previous = head;                     // set previous to first node
    DNode *current = head->next;                // set current to second node

    while(current != nullptr && current->data != d) {
        previous = previous->next;
        current = current->next;
    }
    if(current != nullptr) {
        DNode *temp = new DNode(n);
        previous->next = temp;                  // set previous.next to temp: P -> T
        temp->prev = previous;                  // point temp.prev to previous: P <-> T
        temp->next = current;                   // set temp.next to current: T -> C
        current->prev = temp;                   // point current.prev to temp: T <-> C
        ++size;
    }
}

void DLList::insert(DNode *d, int n) {          // overloaded insert before d given pointer to d: O(1)
    if(head == nullptr) { return; }
    if(head->data == d->data) {                 // if d head, insert new head
        push_front(n);
        return;
    }
    DNode *temp = new DNode(n);
    temp->next = d;                             // point temp.next to d: T -> D
    temp->prev = d->prev;                       // point temp.prev to previous: P <- T -> D
    d->prev->next = temp;                       // point previous.next to temp: P <-> T -> D
    d->prev = temp;                             // point d.prev to temp: P <-> T <-> D
}

void DLList::erase(int d) {                     // erase d by searching for it: O(1)
    if(head == nullptr) { return; }
    if(head->data == d) {
        pop_front();
        return;
    } else if(tail->data == d) {
        pop_back();
        return;
    }

    DNode *previous = head;                     // point previous to first node
    DNode *current = head->next;                // point current to second node

    while(current != nullptr && current->data != d) {
        previous = previous->next;
        current = current->next;
    }
    if(current != nullptr) {                    // current is the node d
        previous->next = current->next;         // point previous.next to current.next
        current->next->prev = previous;         // point current.next.prev to previous (this removes node d)
        delete current;
        ++size;
    }
}

void DLList::erase(DNode *d) {                  // overloaded erase d given a pointer to d O(1)
    if(head->data == d->data) {                 // erase head
        pop_front();
        return;
    } else if(tail->data == d->data) {          // erase tail
        pop_back();
        return;
    }                                           // erase node in the middle
    d->prev->next = d->next;                    // point previous to next P -> N
    d->next->prev = d->prev;                    // point next to previous P <-> N (removes d from the list)
    delete d;
}

void DLList::print() const {                    // non-member print function
    DNode *current = head;                      // create a node, point it to head
    while(current != nullptr) {                 // repeat until we reach the end of list
        std::cout << current->data << " ";      // print the content of the current node
        current = current->next;                // move current to point to the next node in the list
    }
}

void DLList::printRev() const {                 // non-member print function
    DNode *current = tail;                      // create a node, point it to head
    while(current != nullptr) {                 // repeat until we reach the end of list
        std::cout << current->data << " ";      // print the content of the current node
        current = current->prev;                // move current to point to the next node in the list
    }
}


int main() {
    std::cout << std::endl;

    DLList list;

    list.push_back(700);                        // append 700 (store at end)
    list.push_back(900);                        // append 900
    list.push_back(1100);                       // append 1100
    list.push_front(300);                       // prepend 300 (store at beginning)
    list.push_front(100);                       // prepend 100
    list.push_front(50);                        // prepend 50
    list.print();                               // print forward order
    std::cout << std::endl;

    list.erase(300);
    std::cout<<std::endl;
    list.print();

    std::cout << "\n";
    list.printRev();                            // print reverse order
    std::cout << "\n\n";

    list.pop_front();
    list.pop_back();
    list.print();
    std::cout << "\n\n";


    DNode *current = list.front();                      // locate the node 300
    while(current != nullptr && current->data != 300){
        current=current->next;
    }
    list.insert(current, 250);                          // insert 250 before 300 using pointer

    current = list.front();                             // locate the node 900
    while(current != nullptr && current->data != 900){
        current=current->next;
    }
    list.insert(current, 750);                          // insert 750 before 900 using pointer

    list.print();
    std::cout << "\n\n";


    current = list.front();
    while(current != nullptr && current->data != 300){  // locate the node 300
        current=current->next;
    }
    list.erase(current);                                // erase node 300 given pointer


    while(current != nullptr && current->data != 900){  // locate the node 900
        current=current->next;
    }
    list.erase(current);                                // erase node 900 given pointer

    list.print();

    std::cout << std::endl;
    return 0;
}
