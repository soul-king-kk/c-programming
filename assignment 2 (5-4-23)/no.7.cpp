#include <stdio.h>

int main() {
   int arr[100], n, i, j, flag = 1;

   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   // Check whether the array is a palindrome or not
   for (i = 0, j = n - 1; i < n/2; i++, j--) {
      if (arr[i] != arr[j]) {
         flag = 0;
         break;
      }
   }

   if (flag) {
      printf("The array is a palindrome array.");
   } else {
      printf("The array is not a palindrome array.");
   }

   return 0;
}

