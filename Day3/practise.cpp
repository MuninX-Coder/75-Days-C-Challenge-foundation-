#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable named age and assign it the value 25.

    int age = 25;
    cout << "My age is : " << age << endl;

    // Declare a float variable named temperature with value 36.6.

    float temperature = 36.6;
    cout << "Todays temperature : " << temperature << endl;

    // Create a char variable named grade with value 'B'.

    char grade = 'B';
    cout << "My grade: " << grade << endl;

    // Declare a bool variable named isStudent and set it to true.

    bool isStudent = true;
    cout << "isStudent : " << isStudent << endl;

    // Declare a string variable named city with value "London".

    string city = "London";
    cout << "This is : " << city << endl;

    // Change the value of an integer variable after declaring it (e.g., x = 10; then x = 20;).

    int x = 10;
    cout << "Current value of x : " << x << endl;
    x = 20;
    cout << "New value of x : " << x << endl;

    // Write a program to store your name, age, and grade in variables, then print them.
    string name = "Munin Borah";
    int Myage = 17;
    char Mygrade = 'A';

    cout << "My name is : " << name << endl;
    cout << "My age is : " << Myage << endl;
    cout << "My grade is : " << Mygrade << endl;

    // Create two int variables and print their sum.

    int sum1 = 10;
    int sum2 = 30;
    cout << "sum is: " << sum1 + sum2 << endl;

    // Create two float variables and print their product.

    float f1 = 3.34;
    float f2 = 5.32;
    cout << "product is : " << f1 * f2 << endl;

    // Swap values of two integer variables (without using a third variable).

    int a = 5;
    int b = 10;

    cout << "before swap : " << a << " and b: " << b << endl;

    a = a + b; // a becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    cout << "after swap : " << a << " and b : " << b << endl;

    // Print: "My name is Alex and I am 20 years old." using variables.

    string MyFullname = "My name is Alex and I am 20 years old";
    cout << "My full name is : " << MyFullname << endl;

    // Store the price of an item (float) and quantity (int) in variables, then calculate total cost.

    float price = 20.543;
    int quantity = 6;

    cout << "Total cost : " << price * quantity << endl;

    // Store a circle’s radius in a variable, then calculate and print its area (pi * r * r).

    float pi = 3.14;
    int r = 43;
    int area;

    area = (pi * r * r);
    cout << "area of the circle is : " << area << endl;

    // Create a variable marks and check if it’s greater than 50 (just print the condition result as true/false).
    int marks = 75;

    if (marks > 50)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    // Write a program to calculate the average of three numbers stored in variables.

    int a1, b2, c3, add;

    a1 = 32;
    b2 = 34;
    c3 = 54;
    add = (a1 + b2 + c3) / 3;
    cout << "average of 3 number is : " << add << endl;


    //
    return 0;
}