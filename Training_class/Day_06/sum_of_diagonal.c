//write a program to find the sum of diagonal element in matrix
#include <stdio.h>
int main() {
    int a[100][100], r, c, i, j;
    int sum = 0, sum1 = 0;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if (r != c) {
        printf("Invalid: Diagonal sums are only valid for square matrices.\n");
        return 0;
    }
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
            if (i == j)
                sum += a[i][j];
            if (i + j == r - 1)
                sum1 += a[i][j];
        }
        printf("\n");
    }
    printf("Sum of main diagonal: %d\n", sum);
    printf("Sum of secondary diagonal: %d\n", sum1);
}


// write a program to transpose
// write a program  to print upper triangular martix 
// wap to print lower triangular matrix
// wap to print a diagonal matrix
// wap to print diagonal matrix to find the inverse of given matrix

