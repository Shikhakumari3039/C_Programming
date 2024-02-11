// No Argument Passed and No Return Value

#include<stdio.h>
// void checkPrimeNumber();
// int main(){
//     checkPrimeNumber();
//     return 0;
// }

// void checkPrimeNumber(){
//     int a, i, n;
//     printf("Enter the numbers: ");
//     scanf("&d", &a);
//     if (n==0 || n==1)
//     a =1;
//     for(i=2; i<=n/2; i++){
//         if(n%i ==0){
//             a=1;
//             break;
//         }
//     }
//     if(a==1){
//     printf("%d is not a prime number: ", n);
//     }
//     else{
//     printf("%d is a prime number",n);
//     }
// }

// No Arguments Passed But Returns a Value

// int getInteger();
// int main(){
//     int a, i, n;
//     n= getInteger();
//     if(n == 0 || n==1)
//     a =1;
//     for (i=2; i<=n/2; i++){
//         if(n%i ==0){
//             a=1;
//             break;
//         }
//     }
//     if(a==1)
//     printf("%d is not a prime number",n);
//     else
//         printf("%d is a prime number", n);   
//     return 0;
// }
// int getInteger(){
//     int n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     return n;
// }

// Argument Passed But No Return Value

// void checkPrimeAndDisplay(int n);
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     checkPrimeAndDisplay(n);
//     return 0;
// }

// void checkPrimeAndDisplay(int n){
//     int i, a=0;
//     if(n ==0 || n==1)
//     a=1;
//     for(i=2; i<=n/2; i++){
//         if(n%i ==0){
//             a=1;
//             break;
//         }
//     }
//     if(a==1)
//     printf("%d is not a prime number", n);
//     else
//     printf("%d is not a prime number",n);
// }

//  Argument Passed and Returns a Value

int checkPrimeNumber(int n);

int main() {

  int n, flag;

  printf("Enter a positive integer: ");
  scanf("%d",&n); 
  flag = checkPrimeNumber(n);
  if(flag == 1)
    printf("%d is not a prime number",n);
  else
    printf("%d is a prime number",n);

  return 0;
}
int checkPrimeNumber(int n) {  
  if (n == 0 || n == 1)
    return 1;
}