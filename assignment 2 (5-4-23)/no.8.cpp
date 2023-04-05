#include <stdio.h>

#define SIZE 10 // Define the size of the array

int main() {
    int arr[SIZE]; // Declare an integer array of size SIZE
    int freq[SIZE]; // Declare an integer array to store frequency of each element
    int i, j, count;
    
    // Fill the array with some random numbers
    printf("Enter %d elements in the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array to -1
    }
    
    // Count the frequency of each element in the array
    for (i = 0; i < SIZE; i++) {
        count = 1; // Initialize count to 1
        for (j = i+1; j < SIZE; j++) {
            if (arr[i] == arr[j]) { // If the element is repeated
                count++;
                freq[j] = 0; // Mark the frequency of repeated element as 0
            }
        }
        if (freq[i] != 0) { // If the element is not repeated
            freq[i] = count; // Store the frequency of the element
        }
    }
    
    // Print the frequency of each element in the array
    printf("\nFrequency of each element in the array:\n");
    for (i = 0; i < SIZE; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}

