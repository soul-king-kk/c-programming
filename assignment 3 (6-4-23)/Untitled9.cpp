#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], *p1, *p2;
    int i, n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    p1 = arr1;
    p2 = arr2;

    // Copy elements from arr1 to arr2 using pointers
    for (i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);
    }

    printf("Elements of the original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nElements of the new array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

