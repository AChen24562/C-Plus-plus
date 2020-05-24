// (c) S. Trowbridge & J. Sun
// 5 - promotion

#include <iostream>

using namespace std;

int main() {

	//C++ can automatically handle the mixing of data types (promotion)
	char a = 'a';
	char A = 'A';
	int x = a - A;

    //cout << x << endl;
    cout << a-A << endl;

    return 0;
}
