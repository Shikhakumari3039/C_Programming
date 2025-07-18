//write a program to make decimal to binary.

#include<math.h>
int main(){
    int n, rem, bin=0, i=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        bin=bin+rem*i;
        n=n/2;
        i=i*10;
    }
     printf("Binary is: %d\n", bin);
}