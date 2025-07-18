// FOR squence SERIES
#include<stdio.h>
 void series(int n){
    if(n>0){
        series(n-1);
        printf("%d", n);
    }
}
    void main(){
        int n;
        printf("Enter the number: ");
        scanf("%d", &n);
        series(n);
 }