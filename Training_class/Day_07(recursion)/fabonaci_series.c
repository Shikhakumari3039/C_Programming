//Write a program FABONACI SERIES USING RECURSION
#include<stdio.h>
// int fab( int n){
//     int a=0, b=1, next;
//      for(int i = 1; i <= n; i++) {
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     fab(n);
// }

//OR
void series(int n){
    static int a=-1, b=1, c;
    if(n>0){
        c= a+b;
        printf("%d", c);
        a=b;
        b=c;
        series(n-1);
    }
}
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    series(n);
}