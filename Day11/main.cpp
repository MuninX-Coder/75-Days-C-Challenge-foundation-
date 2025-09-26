#include <iostream>
using namespace std;

int main()
{

    cout << 4 << endl;
    cout << "4" << endl;
    cout << 4 + 4 << endl;
    cout << "4 + 4" << endl; // anythings inside double inverted comma "" are seen as string

    // variables - variables are like a box in the memory to store data

    int age = 17; //  int - data type,  age - variable name , 17- value inside the variable
    cout << age << endl;

    int my_future_age = 22;
    cout << my_future_age << endl;

    int x; // declaration
    x = 5; // initilization
    cout << x << endl;

    int y = 5; // both declaraion and initilization in one line
    cout << y << endl;

    int x1,x2,x3;  // we can create multiple variable in one lin.
    x1 = 4, x2 = 5, x3 = 6;  // we can add multiple values to multiple variable in one line.
    cout << x1 << endl << x2 << endl << x3 << endl;

    // data type - what type of data we want to store.
    return 0;
}