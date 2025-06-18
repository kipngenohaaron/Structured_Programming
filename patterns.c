// patterns.c
#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Using for loop to calculate sum of first N natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers is %d\n", n, sum);
    return 0;
}

// 🔹 1. Right-Angled Triangle of Stars

*
* *
* * *
* * * *
* * * * *

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 🔹 2. Inverted Triangle
* * * * *
* * * *
* * *
* *
*
#include <stdio.h>
int main() {
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// 🔹 3. Number Triangle

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

#include <stdio.h>
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
// 🔹 4. Pyramid Pattern

    *
   * *
  * * *
 * * * *
#include <stdio.h>      
int main() {
    int i, j, n = 5;
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// 🔹 5. Diamond Pattern

    *
   * *
  * * *
 * * * *
* * * *
  * * *
   * *
    *
#include <stdio.h>
int main() {
    int i, j, n = 5;

    // Upper part of diamond
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part of diamond
    for (i = n - 1; i >= 1; i--) {
        for (j = n; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// 🔹 6. Hollow Square Pattern
#include <stdio.h>
int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  "); // Print space for hollow part
            }
        }
        printf("\n");
    }
    return 0;
}
// 5. Pascal’s Triangle (Basic)
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
    
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Function to calculate combination nCr
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < rows - i - 1; space++) {
            printf("  ");
        }

        // Print values in the row
        for (int j = 0; j <= i; j++) {
            printf("%4d", combination(i, j));
        }

        printf("\n");
    }

    return 0;
}


// 🔷 2. Butterfly Pattern

*                 * 
* *             * * 
* * *         * * * 
* * * *     * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * *     * * * * 
* * *         * * * 
* *             * * 
*                 * 


#include <stdio.h>  
int main() {
    int n = 5;

    // Upper part of butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of butterfly
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
// 🔷 3. Hollow Diamond Pattern

    *    
   * *   
  *   *  
 *     *
*       *
 *     *
  *   *
   * *
    *
#include <stdio.h>  
int main() {
    int n = 5;

    // Upper part of hollow diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j < (2 * i - 2); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Lower part of hollow diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (int j = 1; j < (2 * i - 2); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
