// Question 01: write a program to print factorial of a number.
// #include <stdio.h>
// int main() {
//     int n, i;
//     int fact = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         for(i = 1; i <= n; i++) {
//             fact = fact * i;
//         }
//         printf("Factorial of %d is %d\n", n, fact);
//     }
// }
// Question 02: write a program reverse a given number.
// #include<stdio.h>
// int main(){
//     int a, d1, d2, d3, rev;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     d1=a%10;
//     d2=(a/10)%10;
//     d3=a/100;
//     rev = d1*100 + d2*10 + d3*1;
//     printf("rev = %d ", rev);
// }
// Question 03: write a program to find the sum of digits of a number.
// #include<stdio.h>
// int main(){
//     int a, digit, sum=0;
//     printf("Enter the numbers: ");
//     scanf("%d", &a);
//     if(a<0){
//         printf("Enter positive number");
//     }
//     else if(a==0) {
//         printf("sum=%d", sum);
//     }
//     else{
//        while (a > 0) {
//             digit = a % 10;
//             sum += digit;
//             a = a / 10;
//         }
//         printf("Sum  = %d", sum); 
//     }
// }
// Question 04: write a program to print fibonacci series up to n terms.
// #include<stdio.h>
// int main() {
//     int n, i;
//     int a = 0, b = 1, next;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci  %d: ", n);
//     for(i = 1; i <= n; i++) {
//         printf("%d ", a);
//         next = a + b;
//         a = b;
//         b = next;
//     }
// }
// Question 5: Write a program Find GCD (HCF) of two numbers using loop. 
// #include <stdio.h>
// int main() {
//     int a, b, i, gcd;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     for(i = 1; i <= a && i <= b; i++) {
//         if(a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }
//     printf("GCD (HCF) of %d and %d is %d\n", a, b, gcd);
// }
// Question 6: Write a Program Find LCM of two numbers using loop. 
// #include <stdio.h>
// int main() {
//     int a, b, max;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     max = (a > b) ? a : b;
//     while(1) {
//         if(max % a == 0 && max % b == 0) {
//             printf("LCM of %d and %d is %d\n", a, b, max);
//             break;
//         }
//         max++;
//     }
// }
// Question 7: Display all Armstrong numbers between 1 and 1000.
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num, rem, temp, count, sum;
//     printf("Armstrong numbers between 1 and 1000 are:\n");
//     for(num = 1; num <= 1000; num++) {
//         temp = num;
//         count = 0;
//         sum = 0;
//         int n = temp;
//         while(n != 0) {
//             n = n / 10;
//             count++;
//         }
//         n = temp;
//         while(n != 0) {
//             rem = n % 10;
//             sum += pow(rem, count);
//             n = n / 10;
//         }
//         if(sum == temp) {
//             printf("%d\n", temp);
//         }
//     }
// } 
// Question 08: write a program to check a given number is armstrong number 
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, count = 0, rem, sum = 0, temp;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     temp = n;
//     int temp1 = n;
//     while (temp1 != 0) {
//         temp1 = temp1 / 10;
//         count++;
//     }
//     temp1 = n;
//     while (temp1 != 0) {
//         rem = temp1 % 10;
//         sum = sum + (int)pow(rem, count); 
//         temp1 = temp1 / 10;
//     }
//     if (sum == n) {
//         printf("Armstrong Number\n");
//     } else {
//         printf("Not Armstrong Number\n");
//     }
// } 
// Question 09: Check if a number is a strong number.
// #include <stdio.h>
// int main() {
//     int n, temp, digit, i, fact, sum = 0;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     temp = n; // Store original number
//     while (temp > 0) {
//         digit = temp % 10;  
//         fact = 1;
//         for (i = 1; i <= digit; i++) {
//             fact = fact * i;
//         }
//         sum = sum + fact;    
//         temp = temp / 10;    
//     }
//     if (sum == n)
//         printf("%d is a Strong Number.\n", n);
//     else
//         printf("%d is Not a Strong Number.\n", n);
//     return 0;
// }
// Question 10: Print all strong numbers between 1 and 1000.
// #include <stdio.h>
// int main() {
//     int num, temp, rem, i, fact, sum;
//     printf("Strong numbers between 1 and 1000 are:\n");
//     for(num = 1; num <= 1000; num++) {
//         temp = num;
//         sum = 0;
//         while(temp > 0) {
//             rem = temp % 10;
//             fact = 1;
//             for(i = 1; i <= rem; i++) {
//                 fact = fact * i;
//             }
//             sum = sum + fact;
//             temp = temp / 10;
//         }
//         if(sum == num) {
//             printf("%d\n", num);
//         }
//     }
// }
// Question 11: write a program to check a given number is prime or not.
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
// Question 12: Write a program to Print series of Prime no.
// #include <stdio.h>
// int main() {
//     int i, j, n, isPrime;
//     printf("Enter the limit: ");
//     scanf("%d", &n);
//     printf("Prime numbers between 1 and %d are:\n", n);
//     for(i = 2; i <= n; i++) {
//         isPrime = 1; 
//         for(j = 2; j < i; j++) {
//             if(i % j == 0) {
//                 isPrime = 0; 
//                 break;
//             }
//         }
//         if(isPrime == 1) {
//             printf("%d ", i);
//         }
//     }
// } 
// Question 13: Write a program to check a no is palindrome or not.
// #include <stdio.h>
// int main() {
//     int n, rem, rev = 0, temp;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     temp = n;  
//     while(n != 0) {
//         rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n / 10;
//     }
//     if(temp == rev)
//         printf("%d is a Palindrome number.\n", temp);
//     else
//         printf("%d is Not a Palindrome number.\n", temp);
// }
// Question 14: Write a Program to Convert the Binary to Decimal
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int binary, decimal = 0, rem, i = 0;
//     printf("Enter a binary number: ");
//     scanf("%d", &binary);
//     while(binary != 0) {
//         rem = binary % 10;
//         decimal = decimal + rem * pow(2, i);
//         binary = binary / 10;
//         i++;
//     }
//     printf("Decimal number is: %d\n", decimal);
// }
// Question15: write a program to convert decimal to binary
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
// Question 16: Write a Program Print a right-angled triangle of numbers.
// #include <stdio.h>
// int main() {
//     int i, j, rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for(i = 1; i <= rows; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }
// Question 17: Write a Program Print an inverted triangle of stars.
// #include <stdio.h>
// int main() {
//     int i, j, rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for(i = rows; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// Question 18: Write a Program Print a pyramid pattern of stars.
// #include <stdio.h>
// int main() {
//     int i, j, space, rows;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for(i = 1; i <= rows; i++) {
//         for(space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Question 19: Write a Program Print a diamond pattern using stars.
// #include <stdio.h>
// int main() {
//     int i, j, space, rows;
//     printf("Enter number of rows (half of diamond): ");
//     scanf("%d", &rows);
//     for(i = 1; i <= rows; i++) {
//         for(space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i = rows - 1; i >= 1; i--) {
//         for(space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         for(j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Question 20: Write a Program Print Floyd’s triangle.
// #include <stdio.h>
// int main() {
//      int i, j, n, num = 1;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }
// }
// Question 21: Write A program Print Pascal’s triangle.
// #include <stdio.h>
// int main() {
//     int rows, i, j, num;
//     printf("Enter number of rows: ");
//     scanf("%d", &rows);
//     for(i = 0; i < rows; i++) 
//         for(int space = 1; space <= rows - i; space++) {
//             printf(" ");
//         }
//         num = 1; 
//         for(j = 0; j <= i; j++) {
//             printf("%d ", num);
//             num = num * (i - j) / (j + 1);
//         }
//         printf("\n");
//     } }
// Question 22: Write a Program Print a square pattern of stars.
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter the size of the square: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= n; j++) {
//             printf(" * ");
//         }
//         printf("\n");
//     }
// }
// Question 23: Write a Program Print a hollow square of stars.
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter the size of the square: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= n; j++) {
//             if(i == 1 || i == n || j == 1 || j == n)
//                 printf("* ");
//             else
//                 printf("  "); // Print space inside
//         }
//         printf("\n");
//     }
// }
// Question 24: Print butterfly pattern.
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         for(j = 1; j <= 2 * (n - i); j++) {
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i = n; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         for(j = 1; j <= 2 * (n - i); j++) {
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Question 25: Print hollow pyramid pattern.
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         for(j = 1; j <= 2 * (n - i); j++) {
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(i = n; i >= 1; i--) {
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         for(j = 1; j <= 2 * (n - i); j++) {
//             printf(" ");
//         }
//         for(j = 1; j <= i; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// Question 26: Print concentric square number pattern.
// #include <stdio.h>
// int main() {
//     int n, i, j;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int size = 2 * n - 1;
//     for(i = 0; i < size; i++) {
//         for(j = 0; j < size; j++) {
//             int min = i;
//             if(j < min) min = j;
//             if(size - 1 - i < min) 
// min = size - 1 - i;
//             if(size - 1 - j < min) 	
// min = size - 1 - j;
//             printf("%d ", n - min);
//         }
//         printf("\n");
//     }
// }
// Question 27. Create a simple digital clock (HH:MM:SS) that runs using loops for 10 seconds.
// #include <stdio.h>
// #include <unistd.h>  
// int main() {
//     int h = 0, m = 0, s = 0;
//     for(int i = 0; i < 10; i++) {  
//         printf("%d%d%d\n", h, m, s);
//         sleep(1);           
//         s++;                
//         if(s == 60) {
//             s = 0;
//             m++;
//         }
//         if(m == 60) {
//             m = 0;
//             h++;
//         }
//         if(h == 24) {
//             h = 0;
//         }
//     }
// }
// Question 30. Print The Foloowing Pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }
// Question 31. Print The Foloowing Pattern
// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
// #include <stdio.h>
// int main() {
//     int i, j, n;
//     printf("Enter the starting number: ");
//     scanf("%d", &n);
//     for(i = n; i >= 1; i--) {
//         for(j = i; j >= 1; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
// }

