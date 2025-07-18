//write a program to sort an string using pointer
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp, *p, *q;
    int i, j, len;
    printf("Enter a string: ");
    gets(str);  
    len = strlen(str);
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            p = &str[i];
            q = &str[j];

            if (*p > *q) {
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
}
