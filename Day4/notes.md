
---

# 📝 C++ Basics: Variables, Data Types, Naming Rules & Scope

## 🔹 What is a Variable?

* A **variable** is like a box in memory where you store some data.
* You give it a **name** and it holds a **value**.

👉 Example:

```cpp
int age = 15;   // box named age holds number 15
```

---

## 🔹 Data Types in C++

Data type = what kind of data the variable can store.

* `int` → whole numbers (e.g., 10, -5)
* `float` → decimal numbers (e.g., 3.14, -2.5)
* `double` → bigger decimal numbers
* `char` → single character (e.g., 'A', 'z')
* `string` → text (e.g., "hello") *(needs #include <string>)*
* `bool` → true or false

👉 Example:

```cpp
int age = 15;          
float pi = 3.14;       
char grade = 'A';      
string name = "Alex";  
bool isStudent = true; 
```

---

## 🔹 Variable Naming Rules

When naming variables, follow these rules:
✔ Can use letters, digits, underscore (`_`)
✔ Must **start** with a letter or `_` (not a number)
✔ No spaces
✔ No C++ keywords (like `int`, `for`, `while`)

👉 Good names:

```cpp
int age;  
float height_in_cm;  
string firstName;  
```

👉 Bad names:

```cpp
int 2age;   // ❌ starts with number
int for;    // ❌ "for" is a keyword
int my age; // ❌ spaces not allowed
```

---

## 🔹 Variable Scope (where variable is visible)

* **Local variable** → exists only inside the block `{ }`
* **Global variable** → declared outside all functions, can be used anywhere

👉 Example:

```cpp
#include <iostream>
using namespace std;

int x = 10; // global variable

int main() {
    int y = 20; // local variable
    cout << x << endl;  // ✅ works
    cout << y << endl;  // ✅ works
}
```

👉 Another Example (scope inside blocks):

```cpp
int main() {
    int a = 5;
    {
        int b = 10;
        cout << a << endl;  // ✅ a is visible here
        cout << b << endl;  // ✅ b is visible here
    }
    cout << a << endl;      // ✅ still visible
    // cout << b << endl;   // ❌ error! b is out of scope
}
```

---

⚡ **TL;DR**:

* Variables = boxes for data
* Data type = what goes inside the box
* Names = follow rules (no spaces, no keywords, no starting with numbers)
* Scope = where the variable is “alive”

---

