// Q3. Write a program in C to find the sum of the lower triangular elements of a matrix.//
#include <stdio.h>
int main() {
    int row, col;
    printf("Input the number of rows and columns of the matrix:\n");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Input %d elements in the matrix:\n",row*col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("element - [%d],[%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The given array is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("The elements being summed of the lower triangular matrix are: ");
    int sum = 0;
    for (int i = 1; i < row; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("\nThe Sum of the lower triangular Matrix Elements is: %d\n", sum);
    return 0;
}
