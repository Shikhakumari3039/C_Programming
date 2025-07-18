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
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char *start, *end, temp;
    int i=0, len;
    printf("Enter the string: ");
    gets(str);
    len=strlen(str);
    start=str;
    end=str+len-1;
    for(i=0; i<len/2; i++){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
}
