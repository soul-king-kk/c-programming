#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, j, length, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", string);

    length = strlen(string);

    // Check if the string is a palindrome
    for(i = 0, j = length - 1; i < length / 2; i++, j--) {
        if(string[i] != string[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("%s is a palindrome\n", string);
    }
    else {
        printf("%s is not a palindrome\n", string);
    }

    return 0;
}

