// S. Trowbridge 2020
#include <iostream>

class DNode {                                   // public node class to store data
public:
    DNode(const int &d);
    int data;
    DNode *next;
    DNode *prev;
};

class DLList {                                  // linked list container
private:
    DNode *head;
    DNode *tail;
    int size;
public:
    DLList();
    bool empty();
    int getSize() const;
    void push_back(int n);
    void push_front(int n);
    void pop_front();
    void pop_back();
    void insert(int e, int n);
    void erase(int e);
    class ListIterator {                        // iterator class to traverse the list
    public:
        DNode *current;                         // point to the current node in the list
        ListIterator(DLList *list);
        bool hasNext();                         // return true if more nodes left in the list
        ListIterator& operator++();             // prefix advance through the list
        ListIterator operator++(int);           // postfix advance through the list
        int& operator*() const;                 // overload * to return the data of the current node
    };

    ListIterator& begin();                      // return an iterator pointing to the first node
    // big three should be implemented, has been omitted for simplicity
};


DNode::DNode(const int &d): data(d), next(nullptr), prev(nullptr) {
}

DLList::DLList(): head(nullptr), tail(nullptr) {
}

bool DLList::empty() {
    return head == nullptr;
}

int DLList::getSize() const {
    return size;
}

void DLList::push_front(int n) {
    DNode *temp = new DNode(n);
    if(head == nullptr) {
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
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
    temp->prev = tail;
    tail = temp;
    ++size;
}

void DLList::pop_front() {
    if(head == nullptr) { return; }
    DNode *temp = head;
    head = head->next;
    delete temp;
    if(head != nullptr) {
        head->prev = nullptr;
    }
    --size;
}

void DLList::pop_back() {
    if(head == nullptr) { return; }
    else if(size == 1) {
        pop_front();
        return;
    }
    DNode *temp = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete temp;
    --size;
}

void DLList::insert(int e, int n) {
    if(head == nullptr) { return; }
    if(head->data == e) {
        push_front(n);
        return;
    }

    DNode *prev = head;
    DNode *nextNode = head->next;

    DNode *node = new DNode(n);
    while(nextNode != nullptr && nextNode->data != e) {
        prev = prev->next;
        nextNode = nextNode->next;
    }
    if(nextNode != nullptr) {
        prev->next = node;
        node->prev = prev;
        node->next = nextNode;
        ++size;
    }
}

void DLList::erase(int e) {
    if(head == nullptr) { return; }
    if(head->data == e) {
        pop_front();
        return;
    } else if(tail->data == e) {
        pop_back();
        return;
    }

    DNode *prev = head;
    DNode *nextNode = head->next;

    while(nextNode != nullptr && nextNode->data != e) {
        prev = prev->next;
        nextNode = nextNode->next;
    }
    if(nextNode != nullptr) {
        nextNode->next->prev = prev;
        prev->next = nextNode->next;
        delete nextNode;
        --size;
    }
}

/* listiterator ***************************************************************/

DLList::ListIterator& DLList::begin() {           // return an iterator pointing to the first node
    return *(new ListIterator(this));
}

DLList::ListIterator::ListIterator(DLList *list)  // construct an iterator object associated with a list
    : current( list->head ) {
}

bool DLList::ListIterator::hasNext() {            // check if additional elements
    return current != nullptr;
}

DLList::ListIterator& DLList::ListIterator::operator++() {      // prefix advance iterator forwards
    current = current->next;
    return *this;
}

DLList::ListIterator DLList::ListIterator::operator++(int) {    // postfix advance iterator forwards
    ListIterator temp = *this;
    current = current->next;
    return temp;
}

int& DLList::ListIterator::operator*() const {  // return data at iterator position in list
    return current->data;
}

int main() {
    std::cout << std::endl;

    DLList list;                                // create a list
    for(int i=1; i<=10; i++) {                  // store some values into the list
        list.push_back(100*i);
    }


    DLList::ListIterator it1 = list.begin();    // construct an iterator which points to first element
    std::cout << *it1 << "\n";                  // print the element currently pointed to by the iterator

    ++it1;                                      // advance the iterator to the next object
    std::cout << *it1 << "\n\n";                // print the element currently pointed to by the iterator


    DLList::ListIterator it2 = list.begin();    // construct an iterator which points to first element
    while( it2.hasNext() ) {                    // iterate through the list
        std::cout << *it2 << " ";               // print current element
        it2++;                                  // advance the iterator
    }

    std::cout << std::endl;
    return 0;
}
