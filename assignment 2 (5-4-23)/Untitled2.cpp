#include <stdio.h>

#define SIZE 10 // Define the size of the array

int main() {
    int arr[SIZE]; // Declare an integer array of size SIZE
    int i, j, temp;
    
    // Fill the array with some random numbers
    printf("Original array:\n");
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100; // Generate a random number between 0 and 99
        printf("%d ", arr[i]);
    }
    
    // Sort the array in descending order using bubble sort
    for (i = 0; i < SIZE-1; i++) {
        for (j = 0; j < SIZE-i-1; j++) {
            if (arr[j] < arr[j+1]) { // Swap elements if they are in wrong order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Print the sorted array
    printf("\nSorted array in descending order:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

