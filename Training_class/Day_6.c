// 2D ARRAY
#include<stdio.h>

// int main() {
//     int a[100][100], r, c, i, j;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &r, &c);
//     printf("Enter the elements of the matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("The matrix is:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n"); 
//     }
// }

// write a program to find the sum of diagonal element in matrix // check 
// int main(){
// int a[100][100], r, c, i, j;
// int sum=0, sum1=0; 
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &r, &c);
//     printf("Enter the elements of the matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//         printf("The matrix is:\n");
//         for (i = 0; i < r; i++) {
//             for (j = 0; j < c; j++) {
//                 printf("%d ", a[i][j]);
//                 if(i==j)
//                     sum+=a[i][j];
//                     if(i+j==r-1)
//                         sum1=sum1+a[i][j];
//                     }
//                      printf("\n");
//             }
//             printf("Sum of main diagonal: %d\n", sum);
//             printf("Sum of secondary diagonal: %d\n", sum1); 
//         }
//         else
//             printf("Invaild");

// write a program to addition of  two matrix
// int main() {
//     int r, c, i, j;
//     int m1[100][100], m2[100][100], m3[100][100];

//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &r, &c);

//     printf("Enter the elements of the first matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &m1[i][j]);
//         }
//     }

//     printf("Enter the elements of the second matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &m2[i][j]); 
//         }
//     }

//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             m3[i][j] = m1[i][j] + m2[i][j];
//         }
//     }

//     printf("Resultant matrix after addition:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d\t", m3[i][j]);  
//         }
//         printf("\n");
//     }

//     return 0;
// }

// write a program to multiplication of 2 matrixs
// int main() {
//     int r, c, i, j;
//     int m1[100][100], m2[100][100], m3[100][100], m4[100][100];
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d", &r, &c);
//     printf("Enter the elements of the first matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &m1[i][j]);
//         }
//     }
//     printf("Enter the elements of the second matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &m2[i][j]); 
//         }
//     }
//     printf("Enter the elements of the third matrix:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &m3[i][j]);
//         }
//     }
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             m4[i][j] = m1[i][j] * m2[i][j]* m3[i][j];
//         }
//     }
//     printf("Resultant matrix after addition:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d\t", m4[i][j]);  
//         }
//         printf("\n");
//     }
// }


// write a program to transpose
// write a program  to print upper triangular martix 
// wap to print lower triangular matrix
// wap to print a diagonal matrix
// wap to print diagonal matrix to find the inverse of given matrix

// TOPIC IS FUNCTION
// 1-TYPE = NO ARG AND NO RETURN VALUES

// void fact();
// void fact(){
//     int n, i, f=1;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         f=f*i;
//     }
//     printf("Factorial = %d", f);
// }
// void main(){
//     fact();
// }

// 2-TYPE = WITH ARG AND NO RETURN VALUES
// void fact(int);
// void fact(int n) {
//     int i, f = 1;
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     printf("Factorial = %d\n", f);
// }
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     fact(n);
//     return 0;
// }

// 3-TYPE = NO ARG AND WITH RETURN VALUES
// int fact();
// int fact() {
//     int i, f = 1, n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     return f;
// }
// void main() {
//     int res= fact();
//     printf("Factorial = %d\n", res);
// }

//4-TYPE = WITH ARG AND WITH RETURN VALUES
// int fact(int);
// int fact(int n) {
//     int i, f = 1;
//     for (i = 1; i <= n; i++) {
//         f = f * i;
//     }
//     return f;
// }
// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Factorial = %d\n", fact(n));
// }

//call by address
// int fact(int*);
// int fact(int *n) {
//     int i, f = 1;
//     for (i = 1; i <= *n; i++) {
//         f = f * i;
//     }
//     return f;
// }
// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Factorial = %d\n", fact(&n));
// }

// call by values
