#include <stdio.h>


// int main() {
//     // Write C code here
//     int a;
//     int b;
//     int res;
//     scanf("%d%d",&a,&b);
//     if(a>=b){
//         res=b;
//     }
//     else{
//         res=a;
//     }
//     while(res>0){
//         if(a%res==0 && b%res==0){
//             break;
//         }
//         res--;
//     }
//    printf("%d",res);
// }
// int main() {
//     float C;
//     float F;
//     C=50;
//     F=((9*C)/5)+32;
//     printf("the temperature %f",C);
//     printf("%f", F);
// }
// int main(){
//     int a;
//     scanf("%d",&a);
//     if((a%6)==0){
//         printf("input %d is divisible by 6", a);
//     } else {
//         printf("input %d is not divisible by 6",a);
//     }
//   }
// int main(){
//     int a;
//     scanf("%d",&a);
//     if((a%6)==0){
//         if((a%4)==0){
//             printf("input %d is divisible by 6and 4\n",a);
//         }
//     }
// }
// int main(){
//     int a;
//     int s;
//     int s=0;
//     scanf("%d",&a);
//     while(!(a==-1)) {
//         s=s+a;
//         scanf("%d",&a);
//     }
// }
// int main(){
//     int a, b, t;
//     scanf("%d%d", &a,&b);
//    printf("gcd of %d,%d is\n",a,b);
//    while(!(b==0)){
//     t=a;
//     a=b;
//     b=t % b;
//    }
//    printf("%d\n",a);
// }


// int main() {
//     int n, i;
//     int sum = 0;

//     printf("Enter the number : ");

//     for (i = 1; i <=15; ++i) {
//         scanf("%d", &n);
//         sum += n;
//     }
//     printf("The sum of the number is: %d\n", sum);
//     return 0;
//  }

// int main() {
//     int n, i=1, sum = 0;
//     printf("Enter the numbers: ");
  
//     while (i <= 15) {
//         scanf("%d", &n);
//         sum += n;
//         ++i;
//     }
//     printf("the sum of the numbers %d\n", sum);
//     return 0;
// }


// int main(){
//     int n,i=1;
//     scanf("%d",&n);
//     while(i<=n){
//         printf("Shikha - %d\n",i);
//         i++;
//     }
// }

// int main(){
//     int n,i=1;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     while(i<=10){
//         printf("\n%d * %d = %d",n,i,n*i);
//         i++;
//     }

// }

// int main(){
//     int a,n,i=1, temp=0;
//     scanf("%d",&n);
//     while(i<n){
//         scanf("%d",&a);
//         temp=temp+a;
//         i++;
//     }
//     printf("sum is %d",temp);
// }

// int main(){
//     int n=10,i=1, temp=0;
//     while(i<n){
//         if(i%2==0){
//         temp=temp+i;
//         }
//         i++;
//     }
//     printf("sum is %d",temp);
// }

// Write a program in C to display the cube of the number up to an integer.
// Test Data :
// Input number of terms : 5
// Expected Output :
// Number is : 1 and cube of the 1 is :1
// Number is : 2 and cube of the 2 is :8
// Number is : 3 and cube of the 3 is :27
// Number is : 4 and cube of the 4 is :64
// Number is : 5 and cube of the 5 is :125