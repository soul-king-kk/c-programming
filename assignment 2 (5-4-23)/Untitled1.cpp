#include <stdio.h>
#include <limits.h>

int minJumps(int arr[], int n) {
    int jumps[n]; // jumps[i] represents the minimum number of jumps needed to reach arr[n-1] from arr[i]
    int i, j;
    
    if (n == 0 || arr[0] == 0) // edge case
        return -1;
    
    jumps[0] = 0; // Minimum number of jumps needed to reach arr[0] from arr[0] is 0
    
    for (i = 1; i < n; i++) { // Compute minimum jumps for all indices in arr[]
        jumps[i] = INT_MAX; // Initialize jumps[i] to a large number
        
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) { // If arr[i] is reachable from arr[j] and jumps[j] is not infinite
                jumps[i] = jumps[j] + 1; // Update jumps[i] with the minimum jumps needed to reach arr[i]
                break; // Break the inner loop as we have found the minimum jumps for arr[i]
            }
        }
    }
    
    return (jumps[n-1] != INT_MAX) ? jumps[n-1] : -1; // If the last index is reachable, return minimum number of jumps, otherwise return -1
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Minimum number of jumps to reach the end of the array: %d", minJumps(arr, n));
    
    return 0;
}

