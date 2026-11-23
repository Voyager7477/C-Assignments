#include <stdio.h>

// 1. Factorial WITHOUT recursion (Iterative)
unsigned long long factorialIterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// 2. Factorial WITH recursion
unsigned long long factorialRecursive(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorialRecursive(n - 1); // Recursive call
}

int main() {
    int num, choice;

    printf("Factorial Calculator:\n");
    printf("1. Without Recursion (Iterative)\n");
    printf("2. With Recursion\n");
    printf("Enter choice (1-2): ");

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Error: Invalid choice.\n");
        return 1;
    }

    printf("Enter a non-negative integer (0-20): ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid number input.\n");
        return 1;
    }

    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (num > 20) {
        printf("Error: Input exceeds 20 (causes 64-bit integer overflow).\n");
        return 1;
    }

    if (choice == 1) {
        printf("Factorial of %d (Iterative) = %llu\n", num, factorialIterative(num));
    } else {
        printf("Factorial of %d (Recursive) = %llu\n", num, factorialRecursive(num));
    }

    return 0;
}
