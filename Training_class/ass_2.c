//7.  Display all Armstmrong numbers between 1 and 1000.
#include<stdio.h>
//     int main(){
//     int num, temp, rem, count, sum, n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for (num = 1; num <= 1000; num++) {
//         temp = num;
//         count = 0;
//         sum = 0;
//         n = temp;
//         while (n != 0) {
//             n /= 10;
//             count++;
//         }
//         n=temp;
//         while(n!=0){
//         rem=n%10;
//         sum= sum + pow(rem, count);
//         n=n/10;
//         }
//         if(sum==temp){
//             printf("%d\n", temp);
//         }
//     }
// }  

// Question 9. Check if a number is a strong number.

int main(){
    int n, i, fac=1;
    printf("Enter the numbers: ");
    scanf("%d", &n);
    if(n<0){
        printf("not define");
    }
    else{
        for(i=1; i<=n; i++){
            fac *= i;
        }
        printf("Factorial of %d = %d ", n, fac);
    }
}