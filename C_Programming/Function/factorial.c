#include <stdio.h>
 
void factorial(int a){
    int temp=1;
    int i=1;
    while(i<=a){
        temp=temp*i;
        i++;
    }
    printf("%d",temp);
}
 
int main() {
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    factorial(n);
}
 
