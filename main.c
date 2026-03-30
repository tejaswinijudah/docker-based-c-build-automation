#include <stdio.h>
#include "add.h"

int main() {
    int choice, a, b;

    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input!\n");
        return 1;
    }

    switch(choice) {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a, b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a, b));
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero!\n");
            } else {
                printf("Result: %.2f\n", divide(a, b));
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}