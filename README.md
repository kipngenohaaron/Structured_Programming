# Structured_Programming
Great! Let's dive into **C Programming**. Here's a structured overview to help you get started or improve your understanding:

---

## 🔹 What is C Programming?
C is a powerful, general-purpose programming language developed in the early 1970s by **Dennis Ritchie** at Bell Labs. It is widely used for system software, embedded programming, and developing operating systems like UNIX.

---

## 🔹 Key Features
- Simple and efficient
- Low-level access to memory
- Fast execution
- Portable
- Structured programming
- Extensible

---

## 🔹 Basic Structure of a C Program

```c
#include <stdio.h>

int main() {
    // your code goes here
    printf("Hello, World!\n");
    return 0;
}
```

---

## 🔹 Topics in C Programming

### 1. **Data Types & Variables**
```c
int age = 25;
float price = 45.99;
char grade = 'A';
```

### 2. **Operators**
- Arithmetic: `+ - * / %`
- Relational: `== != > < >= <=`
- Logical: `&& || !`
- Assignment: `= += -= *=`

### 3. **Control Structures**
- **Sequential**
- **Decision making**:
  - `if`, `if...else`, `nested if`
  - `switch` statement
- **Loops**:
  - `for`, `while`, `do...while`
- **Jump statements**:
  - `break`, `continue`, `goto`, `return`

### 4. **Functions**
```c
int add(int a, int b) {
    return a + b;
}
```

### 5. **Arrays**
```c
int marks[5] = {78, 90, 86, 92, 88};
```

### 6. **Strings**
```c
char name[] = "John";
```

### 7. **Pointers**
```c
int a = 10;
int *ptr = &a;
```

### 8. **Structures**
```c
struct Student {
    char name[50];
    int age;
};
```

### 9. **File Handling**
```c
FILE *fptr;
fptr = fopen("file.txt", "r");
```

---

## 🔹 Compilation & Execution (in Terminal)
```bash
gcc program.c -o program
./program
```

---

## 🔹 Example: Simple Calculator

```c
#include <stdio.h>

int main() {
    char op;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch(op) {
        case '+': printf("Result = %.2f\n", num1 + num2); break;
        case '-': printf("Result = %.2f\n", num1 - num2); break;
        case '*': printf("Result = %.2f\n", num1 * num2); break;
        case '/': 
            if(num2 != 0)
                printf("Result = %.2f\n", num1 / num2);
            else
                printf("Division by zero error\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
```
