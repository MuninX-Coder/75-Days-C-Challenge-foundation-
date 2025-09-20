#include <iostream>
using namespace std;

int main()
{
    // Take your name as input and print it.
    string name;
    cout << "enter your name: ";
    cin >> name;
    cout << "your name is : " << name << endl;

    // Input your age and print: "You are X years old."
    int age;
    cout << "enter your age :";
    cin >> age;
    cout << "you are " << age << " years old " << endl;

    // Input two numbers and print their sum.
    int num1, num2;
    cout << "enter the value of num1 : " << endl;
    cin >> num1;
    cout << "enter the value of num2 : " << endl;
    cin >> num2;

    cout << "The sum of 2 number is : " << num1 + num2 << endl;

    // Input two numbers and print their difference.
    cout << "The differecne of 2 number is : " << num1 - num2 << endl;

    // Input two numbers and print their product.

    cout << "The product of the 2 number is : " << num1 * num2 << endl;

    // Input two numbers and print their average.
    int average;
    average = (num1 + num2) / 2;
    cout << "The average of 2 number is : " << average << endl;

    // Input length and width of a rectangle and print the area.

    int length, width, area;
    cout << "enter the length of the traingle : ";
    cin >> length;
    cout << "enter the width of the triangle : ";
    cin >> width;

    area = length * width;
    cout << "area of the triangle : " << area << endl;

    // Input radius of a circle and print the circumference.
    int radius, cirumference;
    cout << "enter the radius of the circle : ";
    cin >> radius;
    cirumference = 2 * 3.14 * radius;
    cout << "The circumference of the circle is : " << cirumference << endl;

    // Input three numbers and print them in one line.
    int num3;
    cout << "enter the value of num3 : ";
    cin >> num3;

    cout << " num1 : " << num1 << "num2 : " << num2 << "num3 : " << num3 << endl;

    // Input a character and print it back
    char mychar;
    cout << "enter the value of mychar : ";
    cin >> mychar;

    cout << "my character is : " << mychar << endl;

    // Input your first name and last name separately and print them together as full name.
    string firstname, lastname;
    cout << "enter the value of first name : ";
    cin >> firstname;
    cout << "enter the value of last name : ";
    cin >> lastname;

    cout << "My full name is : " << firstname + lastname << endl;

    // Input marks of 5 subjects and print the total marks.
    int sub1, sub2, sub3, sub4, sub5, totalmarks;

    cout << "enter the value of sub 1 : ";
    cin >> sub1;
    cout << "enter the value of sub 2 : ";
    cin >> sub2;
    cout << "enter the value of sub 3 : ";
    cin >> sub3;
    cout << "enter the value of sub 4 : ";
    cin >> sub4;
    cout << "enter the value of sub 5 : ";
    cin >> sub5;

    totalmarks = sub1 + sub2 + sub3 + sub4 + sub5;

    cout << "Total marks is : " << totalmarks << endl;

    // Input marks of 5 subjects and print the average marks.
    int average_5;
    average_5 = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    cout << "the average of the 5 number is : " << average_5 << endl;

    // Input an integer and print it twice.
    int twiceint;
    cout << "enter the number to print twice : ";
    cin >> twiceint;
    cout << "first time : " << twiceint << "\nsecond time : " << twiceint << endl;

    // Input your birth year and print: "You were born in YEAR."
    int mybirthyear;
    cout << "enter the value of birth year : ";
    cin >> mybirthyear;

    cout << "you were born in year : " << mybirthyear << endl;

    // Input two integers and print: "First number = X, Second number = Y".
    int firstnumber, secondnumber;
    cout << "enter first number : ";
    cin >> firstnumber;
    cout << "enter second number : ";
    cin >> secondnumber;

    cout << "first number : " << firstnumber << endl;
    cout << "second number : " << secondnumber << endl;

    // Input your favorite color and print a sentence: "My favorite color is ..."
    string favcolor;
    cout << "enter your fav color : ";
    cin >> favcolor;

    cout << "My favorite color is : " << favcolor << endl;

    // Input the price of an item and print: "The price is $X".

    float price;
    cout << "enter the price of the item: ";
    cin >> price;

    cout << "The price is : " << price << " $" << endl;

    // Input two words and print them on the same line with a space.
    string word1, word2;
    cout << "enter word 1 : ";
    cin >> word1;
    cout << "enter word 2 : ";
    cin >> word2;

    cout << "word 1 : " << word1 << " word 2 : " << word2 << endl;

    // Input three integers and print them in reverse order.
    int a, b, c;
    cin >> a >> b >> c;
    cout << c << " " << b << " " << a << endl;

    return 0;
}