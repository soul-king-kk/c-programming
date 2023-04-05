#include <stdio.h>

int main() {
    int arr[100];
    int n, largest1, largest2;

    // Read in the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read in the array elements
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest1 and largest2 to the first two elements of the array
    if (arr[0] > arr[1]) {
        largest1 = arr[0];
        largest2 = arr[1];
    } else {
        largest1 = arr[1];
        largest2 = arr[0];
    }

    // Loop through the remaining elements of the array and update largest1 and largest2 if necessary
    for (int i = 2; i < n; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    // Print out the largest two elements
    printf("The largest two elements in the array are: %d and %d", largest1, largest2);

    return 0;
}

