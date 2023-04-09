#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int a, b;
    char op;

    printf("Enter an arithmetic expression (e.g., 2 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", a, b, add(a, b));
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, subtract(a, b));
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, multiply(a, b));
            break;
        case '/':
            printf("%d / %d = %.2f\n", a, b, divide(a, b));
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Division by zero.\n");
        return -1;
    }
    return (float) a / b;
}

