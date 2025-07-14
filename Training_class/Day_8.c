// // compare of two string// check
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str1[100], str2[100], i;
//     int flag=0, l1=0, l2=0;
//     printf("Enter the string1: ");
//     gets(str1);
//     printf("Enter the string2: ");
//     gets(str2);
//     while(str1[l1]!='\0'){
//         l1++;
//     }
//     while(str2[l2]!='\0'){
//         l2++;
//     }
//     if(l1!=l2){
//         flag=0;
//     }
//     else{
//         for(i=0; i<l1; i++){
//             if(str1[i]!=str2[i]){
//                 flag=0;
//                 break;
//             }
//             else{
//                 flag=1;
//             }
//         }
//     }
//     if(flag==0){
//         printf("String are matched");
//     }
//     else{
//         printf("Strings are not matched");
//     }
// }

// wap to check a given string is palindrome or not
// #include <stdio.h>
// int main() {
//     char str[100], i;
//     int len=0, rev;
//     printf("Enter a string: ");
//     gets(str);
//     for(i=o; i<len/2; i++){
//         if(str[i]!= str[len]){
//             flag=0;
//             break;
//         }
//         else{

//         }
//     }
// }

// wap to convert a string into  a upper or lower case

#include <stdio.h>
int main(){
    char str[100], i;
    int len;
    printf("Enter a string: ");
    gets(str);
    for(i=0; i<len;i++){
        if(str[i]>= 65 && str[i]<=90){
            str[i]=str[i]+32;
        }
        else if( str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
        else{
            printf("Invaild");
        }
    }
}