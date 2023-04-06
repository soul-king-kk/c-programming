#include <stdio.h>

// Recursive function to find the GCD of two numbers
int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }

    return gcd(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}

