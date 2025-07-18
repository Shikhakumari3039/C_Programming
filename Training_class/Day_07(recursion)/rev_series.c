// write a program FOR REVERSE SERIES
#include<stdio.h>
void series(int n){
    if(n>0){
        printf("%d", n);
        series(n-1);
    }
}
    int main(){
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        series(n);
 }
