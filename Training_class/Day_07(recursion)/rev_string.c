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

//OR USING ARRAY 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, len;
    printf("Enter a string: ");
    gets(str); 
    len = strlen(str);
    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
}
