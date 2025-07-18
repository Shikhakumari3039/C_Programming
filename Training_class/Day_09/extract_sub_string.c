//Write a program to extract sub string from string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100], sub[100];
//     int pos, len, i;
//     printf("Enter the string: ");
//     gets(str);
//     printf("Enter the starting position: ");
//     scanf("%d", &pos);
//     printf("Enter the length of substring: ");
//     scanf("%d", &len);
//     for(i = 0; i < len; i++) {
//         sub[i] = str[pos + i];
//     }
//     sub[i] = '\0';
//     printf("Extracted Substring: %s\n", sub);
// }

//OR              
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[100];
    int pos, len, i = 0;
    printf("Enter the string: ");
    gets(str); 
    printf("Enter the starting position: ");
    scanf("%d", &pos);
    printf("Enter the length of substring: ");
    scanf("%d", &len);
    if (pos < 1 || pos + len - 1 > strlen(str)) {
        printf("Invalid position or length.\n");
        return 1;
    }
    while(i < len) {
        sub[i] = str[pos + i - 1]; 
        i++;
    }
    sub[i] = '\0';  
    printf("Original string: %s\n", str);
    printf("Extracted substring: %s\n", sub);
}
