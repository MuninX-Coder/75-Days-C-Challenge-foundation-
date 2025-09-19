#include <iostream>


using namespace std;


int glo = 6;
void sum()
{
    int a;
    cout << glo << endl;
}


int main()
{

    int glo = 9;
    glo = 78 ;
    // variable scope and data type
    // int aa = 4;
    // int b = 5;
    int a1 = 34, b = 45;
    cout << "LEARNING C++" << endl;

    cout << "here the value of a is : " << a1 << " here the value of b is : " << b << endl;
    float pi = 3.14;
    cout << "the value of pi is : " << pi << endl;

    char mygrade = 's';
    cout << "my grade : " << mygrade << endl;

    sum();
    cout << glo << endl;

    bool a = true;
    cout << a << endl;
    return 0;
}