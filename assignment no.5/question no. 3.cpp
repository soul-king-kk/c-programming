#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100];
    int i, j;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0, j = 0; i < strlen(text); i++) {
        if (tolower(text[i]) != 'a' && tolower(text[i]) != 'e' && tolower(text[i]) != 'i' && tolower(text[i]) != 'o' && tolower(text[i]) != 'u') {
            text[j] = text[i];
            j++;
        }
    }

    text[j] = '\0';

    printf("Text after removing vowels: %s\n", text);

    return 0;
}

