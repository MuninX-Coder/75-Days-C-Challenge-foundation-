#include <iostream>

// #include "this.h"  this will produce an error if this.h is not in the current directory
using namespace std;

int main()
{
    cout << "This is hello world";

    // operators

    // arithmetic operators
    int a = 4, b = 30;
    cout << "arithmetic operator" << endl;
    cout << "the value of a + b is : " << a + b << endl; // addition
    cout << "the value of a - b is : " << a - b << endl;
    cout << "the value of a * b is : " << a * b << endl;
    cout << "the value of a / b is : " << a / b << endl;
    cout << "the value of a % b is : " << a % b << endl;
    cout << "the value of a++ is : " << a++ << endl;
    cout << "the value of a-- is : " << a-- << endl;
    cout << "the value of ++a is : " << ++a << endl;
    cout << "the value of --a is : " << --a << endl;

    // assingment operators,  used to assign value to variable
    int aa = 2, bb = 34;

    // comparision operator
    cout << "comparision operator" << endl;
    cout << "the value of a == b is : " << (a == b) << endl;
    cout << "the value of a != b is : " << (a != b) << endl;
    cout << "the value of a < b is : " << (a < b) << endl;
    cout << "the value of a > b is : " << (a > b) << endl;
    cout << "the value of a <= b is : " << (a <= b) << endl;
    cout << "the value of a >= b is : " << (a >= b) << endl;

    // logical operator
    cout << "logical operator" << endl;
    cout << "logical and : " << ((a == b) && (a < b)) << endl;
    cout << "logical or " << ((a == b) || (a < b)) << endl;
    cout << "logical not " << (!(a == b)) << endl;

    return 0;
}