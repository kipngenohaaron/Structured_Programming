
## 🔁 What are Looping Structures?

Looping (also called **Iteration**) allows a program to **execute a block of code multiple times** as long as a given condition is true.

---

## ✅ Types of Loops in C

| Loop Type    | Description                              | Best Use Case                                  |
| ------------ | ---------------------------------------- | ---------------------------------------------- |
| `for`        | Loop with a known number of iterations   | Counting, tables, fixed repetition             |
| `while`      | Loop with condition checked before entry | Unknown repetitions, sentinel-controlled loops |
| `do...while` | Condition checked after one execution    | At least one execution guaranteed              |

---

## 🔹 1. `for` Loop

### ✔ Syntax:

```c
for (initialization; condition; update) {
    // code to repeat
}
```

### 💡 Example: Print numbers 1 to 5

```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

---

## 🔹 2. `while` Loop

### ✔ Syntax:

```c
while (condition) {
    // code to repeat
}
```

### 💡 Example: Sum numbers until user enters 0

```c
#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);

    while (num != 0) {
        sum += num;
        scanf("%d", &num);
    }

    printf("Total sum = %d\n", sum);
    return 0;
}
```

---

## 🔹 3. `do...while` Loop

### ✔ Syntax:

```c
do {
    // code to repeat
} while (condition);
```

### 💡 Example: Menu runs at least once

```c
#include <stdio.h>

int main() {
    int option;

    do {
        printf("1. Say Hello\n");
        printf("2. Exit\n");
        printf("Choose option: ");
        scanf("%d", &option);

        if (option == 1)
            printf("Hello!\n");

    } while (option != 2);

    return 0;
}
```

---

## 🔄 Loop Control Statements

| Statement  | Function                        |
| ---------- | ------------------------------- |
| `break`    | Exits the loop immediately      |
| `continue` | Skips rest of current iteration |

---

## 🎯 Student Activities

### ✏️ Activity 1:

Use a `for` loop to print the multiplication table of a number entered by the user.

### ✏️ Activity 2:

Use a `while` loop to find the factorial of a given number.

### ✏️ Activity 3:

Use a `do...while` loop to keep asking for passwords until the correct one is entered.

---

## 📚 Summary

| Loop Type    | Condition Checked | Guaranteed Run | Use Case          |
| ------------ | ----------------- | -------------- | ----------------- |
| `for`        | Before            | No             | Fixed repetitions |
| `while`      | Before            | No             | User-driven       |
| `do...while` | After             | Yes            | Menu systems      |



// ## 🔹 1. `for` Loop
// 🔹 Example 1: Print Numbers 1 to 10
#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i); // Print numbers from 1 to 10
    }
    return 0;
}

// Example 2: Multiplication Table of a Number
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i); // Print multiplication table
    }
    
    return 0;
}
// 🔹 Example 3: Sum of First N Natural Numbers 
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i; // Calculate sum of first N natural numbers
    }

    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}
// 🔹 Example 4: Factorial of a Number
#include <stdio.h>
int main() {
    int n;
    long long factorial = 1; // Initialize factorial variable

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit if input is negative
    }

    for (int i = 1; i <= n; ++i) {
        factorial *= i; // Calculate factorial
    }

    printf("Factorial of %d = %lld\n", n, factorial); // Output the result
    return 0;
}  


// 🔹 2. while Loop
A while loop keeps executing a block of code as long as the condition is true.
The condition is checked before entering the loop.

// 🔹 Example 1: Print Numbers 1 to 5
#include <stdio.h>
int main() {
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
        i++; // Increment i
    }

    return 0;
}
// 🔹 Example 2: Sum of Numbers Until User Enters 0
#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter numbers (0 to stop):\n");
    scanf("%d", &num);

    while (num != 0) {
        sum += num; // Add number to sum
        scanf("%d", &num); // Read next number
    }

    printf("Total sum = %d\n", sum);
    return 0;
}