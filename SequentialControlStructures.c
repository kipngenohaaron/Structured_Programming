
// A Sequential Control Structure is the default mode of execution in C programming. In this structure, instructions are executed one after another in the order they appear — from top to bottom.

// ✅ Example 1: Simple Arithmetic Operations
#include <stdio.h>
int main() {
    int a = 5;
    int b = 10;
    int sum = a + b; // Adding two numbers
    printf("Sum: %d\n", sum); // Output the result
    return 0;
}


// ✅ Example 2: Variable Declaration and Initialization
#include <stdio.h>
int main() {
    int x = 20; // Declare and initialize variable
    int y = 30; // Another variable
    int result = x * y; // Multiply the variables
    printf("Result: %d\n", result); // Output the result
    return 0;
}

// Temperature Conversion
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
// ✅ Example 3: Simple Input/Output
#include <stdio.h>
int main() {
    char name[50]; // Declare a character array for the name
    printf("Enter your name: "); // Prompt user for input
    scanf("%s", name); // Read input from user
    printf("Hello, %s!\n", name); // Output greeting
    return 0;
}

// ✅ Example 4: Area and Perimeter of a Rectangle
#include <stdio.h>
int main() {
    float length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width; // Calculate area
    perimeter = 2 * (length + width); // Calculate perimeter

    printf("Area: %.2f\n", area); // Output area
    printf("Perimeter: %.2f\n", perimeter); // Output perimeter

    return 0;
}

// ✅ Example 5: Bill Calculation
#include <stdio.h>

int main() {
    int quantity;
    float price_per_item, total;

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price per item: ");
    scanf("%f", &price_per_item);

    total = quantity * price_per_item;

    printf("Total bill = %.2f\n", total);

    return 0;
}
// ✅ Example 6: Simple Interest Calculation
#include <stdio.h> 
int main() {
    float principal, rate, time, simple_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100; // Calculate simple interest

    printf("Simple Interest = %.2f\n", simple_interest); // Output the result

    return 0;
}
// ✅ Example 7: Factorial Calculation
#include <stdio.h>  
int main() {
    int n, i;
    long long factorial = 1; // Initialize factorial variable

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit if input is negative
    }

    for (i = 1; i <= n; ++i) {
        factorial *= i; // Calculate factorial
    }

    printf("Factorial of %d = %lld\n", n, factorial); // Output the result

    return 0;
}    

// 🔹 Example: Reading Different Data Types
#include <stdio.h>
int main() {
    int integer;
    float floating_point;
    char character;

    printf("Enter an integer: ");
    scanf("%d", &integer);
    printf("Enter a floating-point number: ");
    scanf("%f", &floating_point);
    printf("Enter a character: ");
    scanf(" %c", &character); // Note the space before %c to consume any leftover newline character

    printf("You entered: Integer = %d, Float = %.2f, Character = %c\n", integer, floating_point, character);

    return 0;
}

// ✅ Simple Interest Program in C
#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input values
    printf("Enter Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &rate);

    printf("Enter Time in years (T): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    // Display result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
simple Calculator Program in C
#include <stdio.h>
int main() {
    float num1, num2, result;
    char operator;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Input operator
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
// ✅ Example 8: Basic Calculator
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

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero.\n");
                return 1; // Exit with error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit with error code
    }

    printf("Result: %.2f\n", result);
    return 0;
}