//write a program to passing 2d array into a function
#include <stdio.h>
void display(int a[100][100], int r, int c) {
    int i, j;
    printf("Array elements are:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int a[100][100], i, j, r, c;
    printf("Enter the size of row and column: ");
    scanf("%d%d", &r, &c);
    printf("Enter the elements of array:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    display(a, r, c);
}