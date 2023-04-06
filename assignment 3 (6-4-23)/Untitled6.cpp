#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int freq1[26] = {0}, freq2[26] = {0};
    int i, len1, len2;

    printf("Enter the first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("Enter the second string: ");
    fgets(str2, MAX_SIZE, stdin);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // Removing the newline character from the strings
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }

    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }

    // Check if lengths of the strings are equal
    if (len1 != len2) {
        printf("The strings are not anagrams\n");
        return 0;
    }

    // Calculate frequency of each character in the first string
    for (i = 0; i < len1; i++) {
        freq1[str1[i] - 'a']++;
    }

    // Calculate frequency of each character in the second string
    for (i = 0; i < len2; i++) {
        freq2[str2[i] - 'a']++;
    }

    // Compare the frequency of each character in the two strings
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("The strings are not anagrams\n");
            return 0;
        }
    }

    printf("The strings are anagrams\n");

    return 0;
}

