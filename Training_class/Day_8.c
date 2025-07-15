//  compare of two string
// #include <stdio.h>
// #include <string.h>
// void main() {
//     char str1[100], str2[100];
//     int i, flag = 1, l1 = 0, l2 = 0;
//     printf("Enter the string1: ");
//     gets(str1);
//     printf("Enter the string2: ");
//     gets(str2);
//     while (str1[l1] != '\0') {
//         l1++;
//     }
//     while (str2[l2] != '\0') {
//         l2++;
//     }
//     if (l1 != l2) {
//         flag = 0;
//     } else {
//         for (i = 0; i < l1; i++) {
//             if (str1[i] != str2[i]) {
//                 flag = 0;
//                 break;
//             }
//         }
//     }
//     if (flag == 1) {
//         printf("Strings are matched\n");
//     } else {
//         printf("Strings are not matched\n");
//     }
// }

// wap to check a given string is palindrome or not
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int i, len, flag = 1;
//     printf("Enter a string: ");
//     gets(str);  
//     len = strlen(str);
//     for (i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             flag = 0;
//             break;
//         }
//     }
//     if (flag)
//         printf("The string is a palindrome.\n");
//     else
//         printf("The string is not a palindrome.\n");
// }

// wap to convert a string into  a upper or lower case
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int i;
//     printf("Enter a string: ");
//     gets(str); 
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] >= 'A' && str[i] <= 'Z') {
//             str[i] = str[i] + 32;
//         } else if (str[i] >= 'a' && str[i] <= 'z') {
//             str[i] = str[i] - 32; 
//         }
//     }
//     printf("Converted string: %s\n", str);
// }

// wap to concatenates of two strings
// #include <stdio.h>
// int main() {
//     char str1[100], str2[100];
//     int i = 0, j = 0;
//     printf("Enter first string: ");
//     gets(str1);  
//     printf("Enter second string: ");
//     gets(str2);
//     while (str1[i] != '\0') {
//         i++;
//     }
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }
//     str1[i] = '\0';
//     printf("Concatenated string: %s\n", str1);
// }

//wap to sorting the string 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, j, len;
    printf("Enter a string: ");
    gets(str);  
    len = strlen(str);
    for (i = 0; i < len - 1; i++) {         // use bubble sort
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
}
