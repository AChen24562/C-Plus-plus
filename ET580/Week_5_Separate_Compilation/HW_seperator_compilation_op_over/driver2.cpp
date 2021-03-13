#include "RatNum2.h"

int main() {
    cout << RatNum::gcd(10,20) << endl;

    cout << endl;
    RatNum r1(1,2), r2(1,6), r3(2,5);
    // test operator overloads
    cout << "\nInput/Output Stream Operators: " << endl;

    RatNum r4;
    //cout << "Enter a rational number: ";
    //cin >> r4;
    //cout << r4 << endl;
    //cout << "Negation Operation: " << endl;
    //cout << -r4 << endl;

    // test arithmetic overloads
    cout << "\nArithmetic Operators: " << endl;
    RatNum r5 = r1 + r2;
    cout << r1 << " + " << r2 <<  " = " << r5 << endl;

    RatNum r6 = r1 - r2;
    cout << r1 << " - " << r2 <<  " = " << r6 << endl;
    RatNum r7 = r1 * r2;
    cout << r1 << " * " << r2 <<  " = " << r7 << endl;
    RatNum r8 = r1 / r2;
    cout << r1 << " / " << r2 <<  " = " << r8 << endl;

    // test arithmetic operation chaining
    cout << "\nArithmetic Chaining: " << endl;
    RatNum r9 = r5 + r6 - r7 * r8;
    cout << r5 <<  " + " << r6 << " - " << r7 << " * " << r8 << " = " << r9 << endl;

    // test relational operator overload
    cout << "\nRelational Operators: " << endl;
    cout << r5 << " == " << r6 << "? " << (r5==r6) << endl;
    RatNum r12{8, 12};
    cout << "Test: " << r12 << "==" << r5 << "?   "<< (r5 == r12)<<endl;
    cout << r5 << " != " << r6 << "? " << (r5!=r6) << endl;
    cout << r5 << " > " << r6 << "? " << (r5>r6) << endl;
    cout << r5 << " < " << r6 << "? " << (r5<r6) << endl;


    // test subscript overload
    cout << "\nSubscript Operator: " << endl;
    cout << r5 << " num=" << r5[1] << " den=" << r5[2] << endl;
    cout << endl;
    return 0;
}
