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
    int start, end;

    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    // Check each number between start and end
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}

