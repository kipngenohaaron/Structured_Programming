//  1. if Statement Example
// #include <stdio.h>
// Example 1: Check if a number is positive, negative, or zero
#   include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
// Program: Check if a number is even.
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    }

    return 0;
}

// ✅ 2. if...else Statement Example
// Example 1: Check if a number is positive, negative, or zero
#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}


// Example 2: Check if a number is even or odd
#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}


// ✅ 3. else if Ladder Example

// Example 3: Grade Evaluation
#include <stdio.h>
int main() {
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    // Check the grade based on marks
    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else if (marks >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

// ✅ 4. switch Statement Example
// Example 4: Day of the Week
#include <stdio.h>
int main() {
    int day;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &day);

    // Determine the day of the week using switch statement
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
// Program: Simple menu-based calculator.
#include <stdio.h>

int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if (b != 0) {
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
// Example 5: Simple Calculator
#include <stdio.h>  
int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline character

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}