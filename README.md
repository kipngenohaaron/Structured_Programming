
# 📘 C Programming: Control Structures & Patterns

This repository contains practical examples of **Control Structures** in C programming, including **Sequential**, **Selection**, and **Looping** structures. These examples demonstrate how logic and flow control work in C, including useful applications like **simple calculators**, **interest calculators**, and **pattern printing** using nested loops.

---

## 📂 Table of Contents

1. [Introduction](#introduction)
2. [Control Structures in C](#control-structures-in-c)

   * [1. Sequential](#1-sequential-control-structure)
   * [2. Selection (Decision-Making)](#2-selection-decision-making-control-structures)
   * [3. Looping](#3-looping-control-structures)
3. [Pattern Printing Examples](#pattern-printing-examples)
4. [Compilation & Execution](#compilation--execution)
5. [Learning Outcomes](#learning-outcomes)
6. [Author](#author)

---

## 📖 Introduction

C Programming offers powerful control flow mechanisms through its **Control Structures**, which allow developers to decide the order in which code is executed. This project illustrates each type of control structure with examples, followed by pattern programs to deepen understanding through logic building.

---

## 🔁 Control Structures in C

---

### 🟩 1. Sequential Control Structure

Executes instructions one after another in the order they appear.

**Example 1: Simple Interest Calculator**

```c
#include <stdio.h>
int main() {
    float P, R, T, SI;
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("Simple Interest = %.2f\n", SI);
    return 0;
}
```

**Example 2: Simple Calculator**

```c
#include <stdio.h>
int main() {
    char op;
    float a, b, result;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = a / b;
    else printf("Invalid operator!");

    printf("Result = %.2f\n", result);
    return 0;
}
```

---

### 🟨 2. Selection (Decision-Making) Control Structures

Used to make decisions and execute code conditionally using `if`, `else`, `switch`.

**Example 1: if-else to Check Even/Odd**

```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
```

**Example 2: switch-case (Simple Calculator)**

```c
#include <stdio.h>
int main() {
    char op;
    float a, b;
    printf("Enter operator and two numbers: ");
    scanf(" %c %f %f", &op, &a, &b);
    switch(op) {
        case '+': printf("Sum = %.2f\n", a + b); break;
        case '-': printf("Diff = %.2f\n", a - b); break;
        case '*': printf("Product = %.2f\n", a * b); break;
        case '/': printf("Quotient = %.2f\n", a / b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
```

---

### 🟦 3. Looping Control Structures

Used to repeat a block of code. C supports:

* `for` loop
* `while` loop
* `do...while` loop

---

#### 🔹 for Loop Example

```c
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Count: %d\n", i);
    }
    return 0;
}
```

---

#### 🔹 while Loop Example

```c
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        printf("Value: %d\n", i);
        i++;
    }
    return 0;
}
```

---

#### 🔹 do...while Loop Example

```c
#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("Index: %d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
```

---

## 🖼️ Pattern Printing Examples

Patterns are a great way to practice **nested loops**.

---

### ✅ Pascal’s Triangle

```c
#include <stdio.h>
long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}
long long combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) printf("  ");
        for (int j = 0; j <= i; j++) printf("%4lld", combination(i, j));
        printf("\n");
    }
    return 0;
}
```

---

### ✅ Diamond Star Pattern

```c
#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int space = i; space < rows; space++) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int space = rows; space > i; space--) printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++) printf("*");
        printf("\n");
    }
    return 0;
}
```

---

### ✅ Butterfly Pattern

```c
#include <stdio.h>
int main() {
    int n = 4;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        for (int j = 1; j <= 2 * (n - i); j++) printf("  ");
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
```

---

## 🧪 Compilation & Execution

Use any C compiler (like GCC):

```bash
gcc filename.c -o output
./output
```

Example:

```bash
gcc pascal_triangle.c -o pascal
./pascal
```

---

## 🎯 Learning Outcomes

By studying these examples, you will:

* Understand **all C control structures**
* Gain experience in **decision-making and iteration**
* Learn how to use **nested loops** to build patterns
* Build a foundation for solving real-world logic problems

---

## 👨‍💻 Author

**Kipngenoh Aaron**
📧 [kipngenohaaron@gmail.com](mailto:kipngenohaaron@gmail.com)
🔗 [GitHub Profile](https://github.com/kipngenohaaron)

