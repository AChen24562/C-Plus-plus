// (c) S. Trowbridge
// Ex 1c - variable reference

#include <string>
using namespace std;

int main()
{
    // variable declaration
    // type name;
    int i;
    double f;
    char c;
    string s;
    bool b;

    // multiple variable declarations per line
    // type name, name;
    int j, k;
    double g, h;
    char d, e;
    string str_1, str_2;
    bool isCorrect, hasNext;

    // variable assignment
    // variableName = some_expression;
    i = 1;
    f = 5.5;
    c = 'H';
    s = "Hello";
    b = true;

    // multiple variable assignment per line
    // name = some_expression, name = some_expression...;
    j = 1, k = 2, g = 5.5, h = 3.8, d = 'I', e = 'J',
    str_1 = "First string.", str_2 = "Second string.",
    isCorrect = true, hasNext = false;

    // variable initialization (declare and assign in one step)
    int myInteger = 1;      // c++03 classic initialization
    double myDecimal{5.5};  //c++11 brace initialization
    char myChar = 'C';
    string myString = "A string.";

    // multiple variable initialization per line
    int m = 1, n = 2;
    double t{5.5}, u{9.2};
    char upperC = 'C', lowerC = 'c';
    string str_3 = "Third string.", str_4 = "Fourth string.";
    bool isUp = true, isDown = false;

    return 0;
}
