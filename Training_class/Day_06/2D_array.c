// write a program to find 2D ARRAY
#include<stdio.h>
int main() {
    int a[100][100], r, c, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
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
        }
        printf("\n"); 
    }
}