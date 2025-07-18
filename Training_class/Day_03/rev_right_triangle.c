// using nested  loop
//write a program to print * reverse right triangle.
#include<stdio.h>
// int main(){
//     int a, i, j;
//     printf("Enter the number:");
//     scanf("%d", &a);
//     for(i=a; i>=1;i++);{
//         for(j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

//OR
int main(){
    int a, i, j;
    printf("Enter the number:");
    scanf("%d", &a);
    for(i=a; i>=1;i--){
        for(j=1; j<=i; j++){
            printf(" * ");
        }
        printf("\n");
    }
}