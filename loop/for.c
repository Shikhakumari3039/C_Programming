#include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number:");
//     scanf("%d",&n);
//     for(int i=1; i<n;i++){
//         for(int j=0; j<i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(int i=1; i<=10; i++){
//         printf("\n%d * %d = %d", n,i,n*i);
//     }
// }

// int main(){
//     int n,s,temp=0;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//     scanf("%d",&s);
//     temp=temp+s;
//    }
//    printf("sum is %d",temp);
// }
// //
// #include <stdio.h>


int main() {
    // Write C code here
    int a=98;
    int b=56;
    int res;
    if(a>=b){
        res=a;
    }
    else{
        res=b;
    }
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}