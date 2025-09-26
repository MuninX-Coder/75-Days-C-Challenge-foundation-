#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl;

    cout << "Hi" << endl;
    x = 8; // we change the value of x to 8 in this line
    cout << x << endl;
    x = 28; // we channge the vlaue of x to 28 in this line
    cout << x << endl;
    x = x + 7; // in this line we say, add 7 to x which is 28 and then keep the value to x, so we get 35
    cout << x << endl;
    x = x - 23;  // x - 23 = x current value is 35, so 35 - 23 and then keep the value to x, so we get 12
    cout << x << endl;

    x +=2; // says add extra 2 in x, shorthand method to wrtie this  x = x + 2;
    cout << x << endl;  // now we get 14

    return 0;
}