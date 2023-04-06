#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int num) {
    // 0 and 1 are not prime
    if (num < 2) {
        return false;
    }

    // Check for divisibility by numbers from 2 to num/2
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    bool found = false;

    printf("%d = ", num);

    // Check each combination of two prime numbers that add up to num
    for (int i = 2; i <= num/2; i++) {
        if (is_prime(i) && is_prime(num-i)) {
            printf("%d + %d\n", i, num-i);
            found = true;
        }
    }

    // If no combination of prime numbers is found, print a message
    if (!found) {
        printf("No combination of two prime numbers add up to %d\n", num);
    }

    return 0;
}

