// write a program to print series using recursion function.
#include<stdio.h>
void series(int n){
    if(n==0){
        return ;
    }
    printf("%d",n);
    series(n-1);
    printf("%d",n);
}
int main(){
    series(5);
}

