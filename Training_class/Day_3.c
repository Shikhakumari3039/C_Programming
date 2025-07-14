// Day_03
// ctb5nsp7(Google_classroom)
//Loop

#include<stdio.h>
// int main(){
//     int a, fac=1;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     for(int i=1; i<=a; i++){
//         fac *= i;
//     }
//     printf("Factorial = %d", a, fac);
// }

// write a program to check a given is perfect or not
// int main(){
//     int a, sum=0, i;
//     printf("Enter the number: ");
//     scanf("%d", &a);
//     for(i=1; i<a; i++){
//         if(a%i==0){
//             sum+=i;
//         }
//     }
//     if(sum==a){
//         printf("Perfect number");
//     }
//     else{
//         printf("Not perfect number");
//     }
// }

// write a program to check a given number is prime or not

// int main(){
//     int a, c=0;
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     while(i<=a){
//         if(a%i==0){
//             c++;
//         }
//         i++;
//     }
//     if(c==2){
//         printf("Prime number");
//     }
//     else{
//         printf("Not prime number");
//     }
// }

// write a program to check a given number is armstrong number // check again some issues
// #include<math.h>
//     int main(){
//     int n, count=0, rem, sum=0, temp;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     temp=n;
//     for (; n!=0;){
//         n=n/10;
//         count++;
//     }
//     n=temp;
//     while(n!=0){
//         rem=n%10;
//         sum= sum + pow(rem, count);
//         n=n/10;
//     }
//     if(sum==temp){
//         printf("Armstrong");
//     }
//     else{
//         printf("Not Armstrong");
//     }
// }


//nested  loop
// write a program to print * 
// int main(){
//     int a, i, j;
//     printf("Enter the number:");
//     scanf("%d", &a);
//     for(i=a; i>=1;i++);{
//         for(j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int a, i, j;
//     printf("Enter the number:");
//     scanf("%d", &a);
//     for(i=a; i>=1;i--){
//         for(j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }
// write a program to print       *
//                                * *
//                                * * * *
//                                * * * * * * *
// int main(){
//     int n, i, j, sum=1, a=0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n;i++){
//         sum= a+sum;
//         for(j=1; j<=sum; j++){
//             printf(" * ");
//         }
//         a++;
//         printf("\n");  
//     }
// }

// write a program to print triangle can formed using *
// int main(){
//     int n, i, j, space;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n;i++){
//         for(space=1; space<=n-i; space++ ){
//             printf(" ");
//         }
//         for(j=1; j<=i; j++){
//             printf(" * ");
//         }
//         printf("\n");  
//     }
// }

//write prigram to print       *
                    //       * * *
                    //     * * * * *
                    //    * * * * * * *

// int main() {
//     int n, i, j, space;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n;i++){
//         for(space=1; space<=n-i; space++ ){
//             printf(" ");
//         }
//         for(j=1; j<=i*2-1; j++){
//             printf(" * ");
//         }
//         printf("\n");  
//     }
// }

// write program to make a diamond using *
// int main() {
//     int n, i, j, space;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(i=1; i<=n;i++){
//         for(space=1; space<=n-i; space++ ){
//             printf(" ");
//         }
//         for(j=1; j<=i*2-1; j++){
//             printf(" * ");
//         }
//         printf("\n");  
//     }
//     for(i=1; i<=n;i--){
//         for(space=1; space<=n-i; space++ ){
//             printf(" ");
//         }
//         for(j=1; j<=i*2-1; j++){
//             printf(" * ");
//         }
//         printf("\n");  
//     }

// }

//  write a program to make decimal to binary
// #include<math.h>
// int main(){
//     int n, rem, bin=0, i=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     while(n>0){
//         rem=n%2;
//         bin=bin+rem*i;
//         n=n/2;
//         i=i*10;
//     }
//      printf("Binary is: %d\n", bin);
// }