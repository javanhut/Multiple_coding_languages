#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 20

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}

int main() {
    int a, b;
    char option[MAX_LIMIT];

    printf("Enter first Integer: ");
    scanf("%d", &a);

    printf("Enter second Integer: ");
    scanf("%d", &b);

    // Clear input buffer
    while (getchar() != '\n');

    printf("Enter one of the options below:\nAdd: 'add'\nSubtract: 'sub'\nMultiply: 'mult'\nDivide: 'div'\nModulus/Remainder: 'mod'\n");
    printf("Option: ");
    fgets(option, MAX_LIMIT, stdin);

    // Remove newline character from option
    option[strcspn(option, "\n")] = 0;

    if (strcmp(option, "add") == 0) {
        printf("The addition of %d and %d is %d\n", a, b, add(a, b));
    } else if (strcmp(option, "sub") == 0) {
        printf("The subtraction of %d and %d is %d\n", a, b, sub(a, b));
    } else if (strcmp(option, "mult") == 0) {
        printf("The multiplication of %d and %d is %d\n", a, b, multiply(a, b));
    } else if (strcmp(option, "div") == 0) {
        int result = divide(a, b);
        if (b != 0) {
            printf("The division of %d and %d is %d\n", a, b, result);
        }
    } else if (strcmp(option, "mod") == 0) {
        int result = modulus(a, b);
        if (b != 0) {
            printf("The remainder of %d and %d is %d\n", a, b, result);
        }
    } else {
        printf("Invalid Input!\n");
    }
    
    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}
