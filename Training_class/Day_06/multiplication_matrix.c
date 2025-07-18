//write a program to multiplication of 2 matrixs
#include<stdio.h>
int main() {
    int r, c, i, j;
    int m1[100][100], m2[100][100], m3[100][100], m4[100][100];
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m2[i][j]); 
        }
    }
    printf("Enter the elements of the third matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &m3[i][j]);
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            m4[i][j] = m1[i][j] * m2[i][j]* m3[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", m4[i][j]);  
        }
        printf("\n");
    }
}
