#include <stdio.h>

int main() {
    int decimal_num, remainder, quotient;
    char hex_num[100];
    int i = 1, j;

    printf("Enter decimal number: ");
    scanf("%d", &decimal_num);

    quotient = decimal_num;

    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10)
            hex_num[i++] = 48 + remainder;
        else
            hex_num[i++] = 55 + remainder;
        quotient = quotient / 16;
    }

    printf("Hexadecimal number: ");

    for (j = i - 1; j > 0; j--)
        printf("%c", hex_num[j]);

    return 0;
}

