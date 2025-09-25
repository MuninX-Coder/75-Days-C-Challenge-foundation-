#include <iostream>
using namespace std;

int main()
{
    // Input two numbers and print their sum.
    int num1, num2;
    cout << "enter the value of num1 : ";
    cin >> num1;
    cout << "enter the value of num2 : ";
    cin >> num2;

    cout << "addition : " << num1 + num2 << endl;

    // Input two numbers and print their difference.

    cout << "subtraction : " << num1 - num2 << endl;

    // Input two numbers and print their product.

    cout << "multiplication : " << num1 * num2 << endl;
    // Input two numbers and print their quotient.

    cout << "dividion : " << num1 / num2 << endl;
    // Input two numbers and print their remainder (%).

    cout << "remainder : " << num1 % num2 << endl;
    // Input three numbers and print their average.
    int num3, average;
    cout << "enter the value of num3 for calculating the average : ";
    cin >> num3;
    average = (num1 + num2 + num3) / 3;
    cout << "average of 3 number is : " << average << endl;

    // Input a number and print its square.
    int numforsqauare, square;
    cout << "enter the value of the number : ";
    cin >> numforsqauare;

    square = numforsqauare * numforsqauare;
    cout << "square of the number is : " << square;

    // Input a number and print its cube.
    int a_cube, cube;
    cout << "enter the value for the cube : ";
    cin >> a_cube;
    cube = a_cube * a_cube * a_cube;
    cout << "cube of the number is : " << cube << endl;
    // Assignment Operators (=, +=, -=, *=, /=, %=)

    // Input a number, add 10 using +=, and print it.
    int add_10;
    cout << "enter a number to add 10 ";
    cin >> add_10;
    add_10 += 10;
    cout << "after adding 10 : " << add_10 << endl;

    // Input a number, subtract 5 using -=, and print it.
    int sub_5;
    cout << "enter a number to sub 5 ";
    cin >> sub_5;
    sub_5 -= 5;
    cout << "after sub 5 : " << sub_5 << endl;

    // Input a number, multiply by 2 using *=, and print it.
    int mul_2;
    cout << "enter a number to mul by 2 ";
    cin >> mul_2;
    mul_2 *= 2;
    cout << "after mul by 2 : " << mul_2 << endl;

    // Input a number, divide by 3 using /=, and print it.
    int div_3;
    cout << "enter a number to div by 3 ";
    cin >> div_3;
    div_3 /= 3;
    cout << "after div by 3 : " << div_3 << endl;

    // Input a number, get remainder after dividing by 4 using %=.
    int get_remainder;
    cout << "enter a number for remainder : ";
    cin >> get_remainder;
    get_remainder %= 4;
    cout << "after dividing by 4 : " << get_remainder << endl;

    // Comparison Operators (==, !=, >, <, >=, <=)

    // Input two numbers and check if they are equal.
    int com1, com2;
    cout << "enter the value for comparison : ";
    cin >> com1;
    cout << "enter the value of comparioson : ";
    cin >> com2;

    cout << "equal to " << (com1 == com2) << endl;

    // Input two numbers and check if the first is greater than the second.
    cout << "greater then " << (com1 > com2) << endl;

    // Input two numbers and check if the first is smaller than or equal to the second.
    cout << "smaller than " << (com1 < com2) << endl;

    // Logical Operators (&&, ||, !)

    // Input two numbers and check if both are positive.

    cout << "check positive : " << ((com1 >= 1) && (com2 >= 1)) << endl;

    // Input two numbers and check if at least one is even.
    cout << "atlest one is even : " << ((com1 % 2 == 0) || (com2 % 2 == 0)) << endl;

    // Input a number and check if it is NOT zero.
    int not_zero;
    cout << "enter the value for not 0 : ";
    cin >> not_zero;
    cout << "not zero" << (!(not_zero)) << endl;

    // Input three numbers and check if all three are greater than 10.
    int g1, g2, g3;
    cout << "enter the value of greater num1 : ";
    cin >> g1;
    cout << "enter the value of greater num2 : ";
    cin >> g2;
    cout << "enter the value of greater num3 : ";
    cin >> g3;

    cout << "all number are greater than 10 or not : " << ((g1 > 10) && (g2 > 10) && (g3 > 10)) << endl;
    return 0;
}