// S. Trowbridge 2020
#include <iostream>
#include <cassert>
using namespace std;

template<typename T>
class MyArray {                                      // incomplete array template container
private:
    T *p;                                            // partially filled array of type T
    int capacity;
    int size;
public:
    MyArray();
    MyArray(int c);
    T& operator[](int index);
    const T& operator[](int index) const;
    void push_back(T e);
    int getSize() const;
    int getCapacity() const;
};

/* member functions ***********************************************************/
template <typename T>                                 // must appear before each function
MyArray<T>::MyArray(): MyArray(10) {
}
template <typename T>
MyArray<T>::MyArray(int c): size(0) {
    assert(c>0);                                      // runtime error if c<=0
    capacity = c;
    p = new T[capacity];
}
template <typename T>
T& MyArray<T>::operator[](int index) {
    assert(index >=0 && index < size);                // runtime error if index illegal
    return p[index];
}
template <typename T>
const T& MyArray<T>::operator[](int index) const {
    assert(index >=0 && index < size);                // runtime error if index illegal
    return p[index];
}
template <typename T>
void MyArray<T>::push_back(T e) {                     // incomplete function
    p[size++] = e;
}
template <typename T>
int MyArray<T>::getSize() const {
    return size;
}
template <typename T>
int MyArray<T>::getCapacity() const {
    return capacity;
}


/* non-member functions *******************************************************/
template <typename T>                                 // non-member example if T is not pointer type
void print(const MyArray<T> &d) {                     // array of type T pass by reference
    for(int i=0; i<d.getSize();i++) {
        cout << d[i] << " ";
    }
    cout << "\n";
}
template <typename T>                                 // non-member example if T is pointer type
void printPtrs(const MyArray<T> &d) {                 // array of type T pass by reference
    for(int i=0; i<d.getSize();i++) {
        cout << *(d[i]) << " ";
    }
    cout << "\n";
}

int main() {
    cout << "\n";

    MyArray<int> staticNums(10);                       // array of non pointers
    for(int i=0; i<staticNums.getCapacity(); i++) {
        int num = i;
        staticNums.push_back(num);
    }
    print(staticNums);

    MyArray<int*> dynamicNums(10);                    // array of pointers
    for(int i=0; i<dynamicNums.getCapacity(); i++) {
        int *num = new int(i+1);
        dynamicNums.push_back(num);
    }
    printPtrs(dynamicNums);

    cout << endl;
    return 0;
}
