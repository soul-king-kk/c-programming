#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; // Array to store frequency of each character
    int i, maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    // Calculate frequency of each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    // Find the character with highest frequency
    for (i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char) i;
        }
    }

    printf("The character '%c' has the highest frequency of %d\n", maxChar, maxFreq);

    return 0;
}

