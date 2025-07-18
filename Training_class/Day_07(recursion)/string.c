// STRING IN C
// #include<string.h>
// void main(){
//     char str[100];
//     printf("Enter the number: ");
//     scanf("%[^\n] s", str);
//     printf("Strings are : %s", str);
// }

// OR WITHOUT USING SCANF
#include<string.h>
void main(){
    char str[100];
    printf("Enter the number: ");
    gets(str);
    printf("Strings are : %s", str);
}
