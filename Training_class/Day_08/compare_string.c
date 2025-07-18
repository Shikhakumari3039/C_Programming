//write a program to compare of two string using loop
#include <stdio.h>
#include <string.h>
void main() {
    char str1[100], str2[100];
    int i, flag = 1, l1 = 0, l2 = 0;
    printf("Enter the string1: ");
    gets(str1);
    printf("Enter the string2: ");
    gets(str2);
    while (str1[l1] != '\0') {
        l1++;
    }
    while (str2[l2] != '\0') {
        l2++;
    }
    if (l1 != l2) {
        flag = 0;
    } else {
        for (i = 0; i < l1; i++) {
            if (str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1) {
        printf("Strings are matched\n");
    } else {
        printf("Strings are not matched\n");
    }
}