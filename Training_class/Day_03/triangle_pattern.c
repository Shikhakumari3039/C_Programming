//write a program to print triangle can formed 
                    //       * * *
                    //     * * * * *
                    //    * * * * * * *

// #include<stdio.h>
// int main(){
//     int n, i, j, space;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n;i++){
//         for(space=1; space<=n-i; space++ ){
//             printf(" ");
//         }
//         for(j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");  
//     }
// }

//OR
#include<stdio.h>
int main() {
    int n, i, j, space;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n;i++){
        for(space=1; space<=n-i; space++ ){
            printf(" ");
        }
        for(j=1; j<=i*2-1; j++){
            printf(" * ");
        }
        printf("\n");  
    }
}