
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

