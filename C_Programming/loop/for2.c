// Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125

#include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         printf("number is : %d and cube of the %d is %d\n",i,i,i*i*i);
//     }
// }

// Write a program in C to read 10 numbers from the keyboard and find their sum and average.

int main(){
    int a,n,temp=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a);
        temp=temp+a;
    }
    printf("sum is %d\n",temp);
    printf("average is %d\n",temp/n);
}