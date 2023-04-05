#include <stdio.h>

int main() {
   int arr[100], n, i, max_diff, min_element;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Find the minimum element in the array
   min_element = arr[0];
   for (i = 1; i < n; i++) {
      if (arr[i] < min_element) {
         min_element = arr[i];
      }
   }

   // Find the maximum difference between any two elements in the array
   max_diff = arr[1] - min_element;
   for (i = 2; i < n; i++) {
      if (arr[i] - min_element > max_diff) {
         max_diff = arr[i] - min_element;
      }
   }

   // Print the maximum difference between any two elements in the array
   printf("The maximum difference between any two elements in the array is: %d", max_diff);

   return 0;
}

