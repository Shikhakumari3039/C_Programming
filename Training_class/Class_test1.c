//01. wap to sort 2d array
// #include<stdio.h>
// int main() {
//     int a[100][100], temp, r, c, i, j, k, l;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &r, &c);
//     printf("Enter elements:");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             for (k = 0; k < r; k++) {
//                 for (l = 0; l < c; l++) {
//                     if (a[i][j] < a[k][l]) {
//                         temp = a[i][j];
//                         a[i][j] = a[k][l];
//                         a[k][l] = temp;
//                     }
//                 }
//             }
//         }
//     }
//     printf("\nSorted array \n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
// }

//02. wap to convert decimal to binary and count the number of 1's.
// #include <stdio.h>
// int main() {
//     int a, n, count= 0, rem;
//     printf("Enter a decimal number: ");
//     scanf("%d", &a);
//     printf("Binary: ");
//     n = a; 
//     while (n > 0) {
//         rem = n % 2;
//         printf("%d", rem);
//         if (rem == 1)
//             count++;
//         n = n / 2;
//     }
//     printf("\nNumber of 1's = %d\n", count);
// }

//03. wap to draw of following pattern X(make using *)
// #include<stdio.h>
// int main(){
//     int n, i, j, spa;
//     printf("enter the number: ");
//     scanf("%d", &n);
//     for(i=0; i<n; i++){
//         for(j=0; j<n; j++){
//             if(i==j || i+j==n-1){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
