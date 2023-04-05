#include <stdio.h>

int main() {
   int arr[100], even[100], odd[100], n, i, j = 0, k = 0;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Find even and odd elements of the array
   for (i = 0; i < n; i++) {
      if (arr[i] % 2 == 0) {
         even[j] = arr[i];
         j++;
      } else {
         odd[k] = arr[i];
         k++;
      }
   }

   // Print even elements of the array
   printf("Even elements of the array: ");
   for (i = 0; i < j; i++) {
      printf("%d ", even[i]);
   }

   // Print odd elements of the array
   printf("\nOdd elements of the array: ");
   for (i = 0; i < k; i++) {
      printf("%d ", odd[i]);
   }

   return 0;
}

