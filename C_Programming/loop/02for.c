#include<stdio.h>
// int main(){
//     int i;
//     printf("Enter the number:");
//     for(i=1; i<11; i++){
//         printf("%d",i);
//     }
// }

// int main(){
//     int i, n, sum=0;
//     printf("Enter the numbers:");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++){
//         sum+=i;
//     }
//     printf("sum =%d",sum);
// }

int main(){
    int n;
    int a= 0;
    int b= 1;
    int c= 0;
    printf("Enter the numbers: ");
    scanf("%d",&n);
    printf("%d", a);
    printf("%d", b);
    for(int i=1; i<=n; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }    
}