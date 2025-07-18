// write a program to print      *
//                               * *
//                               * * * *
//                               * * * * * * *
#include<stdio.h>                               
int main(){
    int n, i, j, sum=1, a=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i=1; i<=n;i++){
        sum= a+sum;
        for(j=1; j<=sum; j++){
            printf(" * ");
        }
        a++;
        printf("\n");  
    }
}