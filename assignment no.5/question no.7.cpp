#include <stdio.h>

int main() {
    int rows, columns, i, j;
    float matrix[10][10], sum = 0, average;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);

            // Calculate the sum
            sum += matrix[i][j];
        }
    }

    // Calculate the average
    average = sum / (rows * columns);

    printf("\nSum of the matrix elements is %.2f\n", sum);
    printf("Average of the matrix elements is %.2f\n", average);

    return 0;
}

