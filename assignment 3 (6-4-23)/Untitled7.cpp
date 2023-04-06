#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int i, sum = 0;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    // Calculate sum of ASCII values of all characters in the string
    for (i = 0; str[i] != '\0'; i++) {
        sum += (int) str[i];
    }

    printf("Sum of ASCII values of all characters in the string: %d\n", sum);

    return 0;
}

