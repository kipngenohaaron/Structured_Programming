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
