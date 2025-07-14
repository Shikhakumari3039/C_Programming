// TOPIC IS RECURSION
// FOR squence SERIES
#include<stdio.h>
//  void series(int n){
//     if(n>0){
//         series(n-1);
//         printf("%d", n);
//     }
// }
//     void main(){
//         int n;
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         series(n);
//  }

// FOR REVERSE SERIES
// void series(int n){
//     if(n>0){
//         printf("%d", n);
//         series(n-1);
//     }
// }
//     int main(){
//         int n;
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         series(n);
//  }

// WAP FACTORIAL RECURSION
//  int fact (int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
//     printf("%d", n);
//  }
//  int main(){
//     int n;
//     printf("Enter the numbers:");
//     scanf("%d", &n);
//     fact(n);
//  }

// WAP TO FIND THE SUM ALL DIGITS OF A GIVEN NUMBER
// int sum(int n) {
//     if (n == 0)
//         return 0;
//     else
//         return (n % 10) + sum(n / 10);
// }
// int main() {
//     int n;
//     printf("Enter the numbers: ");
//     scanf("%d", &n);
//     sum(n);
//     printf("Sum of digits = %d\n", sum(n));
// }


// WAP FABONACI SERIES USING RECURSION
// int fab( int n){
//     int a=0, b=1, next;
//      for(int i = 1; i <= n; i++) {
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     fab(n);
// }

//OR
// void series(int n){
//     static int a=-1, b=1, c;
//     if(n>0){
//         c= a+b;
//         printf("%d", c);
//         a=b;
//         b=c;
//         series(n-1);
//     }
// }
// void main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     series(n);
// }

//WAP TO PRINT THE SERIES OF ARMSTRONg NUMBER USING RECURSION
// #include <stdio.h>
// #include <math.h>

// Function to count digits of a number
// int countDigits(int n) {
//     if (n == 0)
//         return 0;
//     return 1 + countDigits(n / 10);
// }

// Function to calculate Armstrong sum // CHECK PROPER
// int armstrongSum(int num, int power) {
//     if (num == 0)
//         return 0;
//     int rem = num % 10;
//     return pow(rem, power) + armstrongSum(num / 10, power);
// }
// void printArmstrong(int current, int limit) {
//     if (current > limit)
//         return;
//     int power = countDigits(current);
//     if (current == armstrongSum(current, power)) {
//         printf("%d\n", current);
//     }
//     printArmstrong(current + 1, limit);
// }
// int main() {
//     int n;
//     printf("Enter the upper limit: ");
//     scanf("%d", &n);
//     printf("Armstrong numbers up to %d are:\n", n);
//     printArmstrong(1, n);
//     return 0;
// }


// STRING IN C
// #include<string.h>
// void main(){
//     char str[100];
//     printf("Enter the number: ");
//     scanf("%[^\n] s", str);
//     printf("Strings are : %s", str);
// }

// OR WITHOUT USING SCANF
// #include<string.h>
// void main(){
//     char str[100];
//     printf("Enter the number: ");
//     gets(str);
//     printf("Strings are : %s", str);
// }

//WAP TO FIND THE LENGTH OF STRING
// #include<string.h>
// void main(){
//     char str[100];
//     int len=0;
//     printf("Enter the number: ");
//     gets(str);
//     while(str[len]!='\0'){
//         len++;
//     }
//     printf("Length of string: %d\n", len);
// }

// WAP TO REVERSE A GIVEN STRING USING RECURSION // FUNCTION
// #include<string.h>
// void reverse(char str[], int index) {
//     if (index < 0)
//         return;
//     printf("%c", str[index]);
//     reverse(str, index - 1);
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     gets(str);
//     int len = strlen(str);
//     printf("Reversed string: ");
//     reverse(str, len - 1);
//     printf("\n");
// }

//OR USING ARRAY // complete kro
// int main() {
//     char str[100], i;
//     printf("Enter a string: ");
//     gets(str);
//     int len = ;
//     printf("Reversed string: ");
//     while(str[len]!=\0){
        //     len++;
        // }
        // for(i=0; i<len/2; i++){
        //     temp=str[i];
        //     str[i]=str[len-1-i];
        //     str[len-1-i]-temp;
        // }
        // printf("lenght string are : %s", str);
// }

//WAP to copy a string into another string using loop 
#include<string.h>
int main(){
    char str1[100], str2[100], i;
    int len=0;
    printf("Enter the number: ");
    gets(str1);
    printf("original string are : %s\n", str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0; i<len; i++){
        str2[i]=str[i];
    }
    printf("copied string are =%s", str2);
}
//WAP TO COUNT A VOWEL OR CONSONANT IN A GIVEN STRING
// WAP TO COMPARE TWO STRING USING LOOP