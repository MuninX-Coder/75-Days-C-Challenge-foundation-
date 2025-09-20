
---

# 📝 C++ Basics: Input & Output

## 🔹 Output (cout)

* `cout` is used to **print** stuff on the screen.
* Use `<<` (insertion operator).

👉 Example:

```cpp
cout << "Hello World!";
cout << "Age: " << 18;
```

---

## 🔹 Input (cin)

* `cin` is used to **take input** from the user.
* Use `>>` (extraction operator).

👉 Example:

```cpp
int age;
cin >> age;    // user types a number
cout << "You are " << age << " years old.";
```

---

## 🔹 endl vs \n

* `endl` → moves to next line + flushes output (slightly slower).
* `\n` → just new line (faster, often preferred).

👉 Example:

```cpp
cout << "Line 1" << endl;
cout << "Line 2\n";
```

---

## 🔹 Multiple Inputs

* You can take multiple inputs in one line.

👉 Example:

```cpp
int a, b;
cin >> a >> b;   // input: 5 10
cout << "Sum: " << a + b;
```

---
