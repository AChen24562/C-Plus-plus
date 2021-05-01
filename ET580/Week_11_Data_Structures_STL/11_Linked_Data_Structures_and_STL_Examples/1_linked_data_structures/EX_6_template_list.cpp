// S. Trowbridge 2020
#include <iostream>

template <typename T>
class Node {                  // public external node class to simplify code
public:
    T data;
    Node<T> *next;
    Node(const T &d);
};

template <typename T>
class LList {
private:
    Node<T> *head;
    Node<T> *tail;
    int size;
public:
    LList();
    bool empty();
    int getSize() const;
    void push_back(T n);
    void push_front(T n);
    void pop_front();
    void pop_back();
    void insert(T d, T n);
    void erase(T d);
    Node<T>& front() const;
    // big three should be implemented, has been omitted for simplicity
};

template <typename T>
Node<T>::Node(const T &d): data(d), next(nullptr) {
}

template <typename T>
LList<T>::LList(): head(nullptr), tail(nullptr), size(0) {
}

template <typename T>
bool LList<T>::empty() {
    return head == nullptr;
}

template <typename T>
int LList<T>::getSize() const {
    return size;
}

template <typename T>
void LList<T>::push_front(T n) {
    Node<T> *temp = new Node<T>(n);
    if(head == nullptr) {
        tail = temp;
    } else {
        temp->next = head;
    }
    head = temp;
    ++size;
}

template <typename T>
void LList<T>::push_back(T n) {
    if(head == nullptr) {
        push_front(n);
        return;
    }
    Node<T> *temp = new Node<T>(n);
    tail->next = temp;
    tail = temp;
    size++;
}

template <typename T>
void LList<T>::pop_front() {
    if(head == nullptr) { return; }
    Node<T> *temp = head;
    head = head->next;
    delete temp;
    --size;
}

template <typename T>
void LList<T>::pop_back() {
    if(head == nullptr) { return; }
    else if(size == 1) {
        pop_front();
        return;
    }
    Node<T> *prev = head;
    Node<T> *current = head->next;
    while(current->next != nullptr) {
        prev = prev->next;
        current = current->next;
    }
    prev->next = nullptr;
    tail = prev;
    delete current;
    --size;
}

template <typename T>
void LList<T>::insert(T d, T n) {
    if(head == nullptr) { return; }
    if(head->data == d) {
        push_front(n);
        return;
    }

    Node<T> *prev = head;
    Node<T> *current = head->next;

    Node<T> *temp = new Node<T>(n);
    while(current != nullptr && current->data != d) { // compare pointers or data?
        prev = prev->next;
        current = current->next;
    }
    if(current != nullptr) {
        prev->next = temp;
        temp->next = current;
        ++size;
    }
}

template <typename T>
void LList<T>::erase(T d) {
    if(head == nullptr) { return; }
    if(head->data == d) {
        pop_front();
        return;
    } else if(tail->data == d) {                        // compare pointers or data?
        pop_back();
        return;
    }

    Node<T> *prev = head;
    Node<T> *current = head->next;
    while(current != nullptr && current->data != d) {   // compare pointers or data?
        prev = prev->next;
        current = current->next;
    }
    if(current != nullptr) {
        prev->next = current->next;
        delete current;
        --size;
    }
}

template <typename T>
Node<T>& LList<T>::front() const {
    return *head;
}

template <typename T>
void print(const LList<T> &l) {
    Node<T> *current = &(l.front());
    while(current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
}

int main() {
    std::cout << std::endl;

    LList<int> list;            // list of integer variables

    list.push_back(700);
    list.push_back(900);
    list.push_back(1100);
    list.push_front(300);
    list.push_front(100);
    list.push_front(50);
    print(list);
    std::cout << "\n\n";

    list.pop_front();
    list.pop_back();
    print(list);
    std::cout << "\n\n";

    list.insert(100, 100);
    list.insert(700, 500);
    list.insert(900, 800);
    list.insert(1000, 5150);
    print(list);
    std::cout << "\n\n";

    list.erase(50);
    list.erase(500);
    list.erase(9999);
    print(list);

    std::cout << std::endl;
    return 0;
}
