#include <stdio.h>

int main() {
    int arr[5] = {12, 56, 34, 78, 100};
    int n = 5;
    int largest = arr[0]; // Initialize the variable to the first element of the array

    // Loop through the array and compare each element with the current largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d", largest);
    return 0;
}

