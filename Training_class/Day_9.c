// wap to count the number of digits, alphabate and special character in a give strings
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i, alph=0, special=0, digits=0, len;
//     printf("Enter the Strings: ");
//     gets(str);
//     len = strlen(str);
//     for(i=0; i<len; i++){
//         if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
//             alph++;
//         }
//         else if(str[i]>=48 && str[i]<=57){
//             digits++;
//         }
//         else{
//             special++;
//         }
//     }
//     printf("Alphabets: %d\n", alph);  
//     printf("Digits: %d\n", digits);
//     printf("Special Characters: %d\n", special);
// }  

// wap to extract sub string from string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100], sub[100];
//     int pos, len, i;
//     printf("Enter the string: ");
//     gets(str);
    // printf("Enter the starting position: ");
    // scanf("%d", &pos);
    // printf("Enter the length of substring: ");
    // scanf("%d", &len);
//     for(i = 0; i < len; i++) {
//         sub[i] = str[pos + i];
//     }
//     sub[i] = '\0';
//     printf("Extracted Substring: %s\n", sub);
// }

//OR  // check proper way
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100], sub[100];
//     int pos, len, i=0;
//     printf("Enter the string: ");
//     gets(str);
//     printf("Enter the starting position: ");
//     scanf("%d", &pos);
//     printf("Enter the length of substring: ");
//     scanf("%d", &len);
//     while(i<len){
//         sub[i]=str[pos+i-1];
//         i++;
//     }
//     sub[i] = '\0'; 
//     printf("Strings are: %s\n", str);
//     printf("Substring are: %s\n", sub);
// }

// wap to reverse a string using pointer
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     char *start, *end, temp;
//     printf("Enter the string: ");
//     gets(str);
//     start = str;                    
//     end = str + strlen(str) - 1;     
//     while (start < end) {
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     printf("Reversed string: %s\n", str);
// }

//OR
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     char *start, *end, temp;
//     int i=0, len;
//     printf("Enter the string: ");
//     gets(str);
//     len=strlen(str);
//     start=str;
//     end=str+len-1;
//     for(i=0; i<len/2; i++){
//         temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     printf("Reversed string: %s\n", str);
// }

// //wap to sort an string using pointer
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100], temp, *p, *q;
//     int i, j, len;
//     printf("Enter a string: ");
//     gets(str);  
//     len = strlen(str);
//     for (i = 0; i < len - 1; i++) {
//         for (j = i + 1; j < len; j++) {
//             p = &str[i];
//             q = &str[j];

//             if (*p > *q) {
//                 temp = *p;
//                 *p = *q;
//                 *q = temp;
//             }
//         }
//     }
//     printf("Sorted string: %s\n", str);
// }

// wap in built string function using function 
//1
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[100], str2[100];
//     printf("Enter a string1: ");
//     gets(str1);
//     printf("Enter a string2: ");
//     gets(str2); 
//     printf("Length =%d\n", strlen(str));
//     printf("Length= %s\n", strrev(str)); 
//     printf("Length= %d\n", strlwr(str)); 
//     printf("Length= %d\n", strupr(str)); 
//     printf("Copied string = %s\n", strcpy(str1, str2)); 
//     printf("Compare string= %d\n", strcmp(str1, str2)); // ye de raha h asscii ki values
// }

// New topics
// wap to passing 1d array into a function
// #include<stdio.h>
// void display(int a[], int n){
//     int i;
//     printf("Arrays elements are: ");
//     for(i=0; i<n; i++){
//         printf("%d", a[i]);
//     }
// }
// int main(){
//     int a[100], i, n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     printf("Enter the elements of array: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     display(a,n);             // base array or size
// }

// wap to passing 2d array into a function
// #include <stdio.h>
// void display(int a[100][100], int r, int c) {
//     int i, j;
//     printf("Array elements are:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main() {
//     int a[100][100], i, j, r, c;
//     printf("Enter the size of row and column: ");
//     scanf("%d%d", &r, &c);
//     printf("Enter the elements of array:\n");
//     for (i = 0; i < r; i++) {
//         for (j = 0; j < c; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     display(a, r, c);
// }

// wap to passing character into a function
// #include <stdio.h>
// void displayChar(char ch) {
//     printf("You entered character: %c\n", ch);
// }
// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf(" %c", &c); 
//     displayChar(c);
// }

//TOPIC IS STRUCTURE

