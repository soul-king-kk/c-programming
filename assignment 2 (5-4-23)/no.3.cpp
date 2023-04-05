#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;
    float sum = 0, avg;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Sort the array in descending order
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    // Find the second largest and smallest elements in the array
    int largest = arr[0];
    int smallest = arr[n-1];
    int second_largest = smallest;
    int second_smallest = largest;
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
        
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    
    // Calculate the average of the second largest and smallest elements
    avg = (float)(second_largest + second_smallest) / 2;
    
    // Check if the average is present in the array
    int found = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            found = 1;
            break;
        }
    }
    
    // Display the result
    printf("Second largest element = %d\n", second_largest);
    printf("Second smallest element = %d\n", second_smallest);
    printf("Average of second largest and smallest elements = %.2f\n", avg);
    if (found) {
        printf("The average is present in the array.\n");
    } else {
        printf("The average is not present in the array.\n");
    }
    
    return 0;
}

