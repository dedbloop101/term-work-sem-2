//Q4: Write a program in C to find the max element of each row of a matrix.//
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
    printf("The maximum element of each row of matrix are: ");
    for (int i = 0; i < row; i++) {
        int max = matrix[i][0];
        for (int j = 1; j < col; j++) {
            if (matrix[i][j] > max)
                max = matrix[i][j];
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}
