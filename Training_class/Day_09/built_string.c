//write a program in built string function using function
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter string 1: ");
    gets(str1);  // unsafe, use fgets in real use
    printf("Enter string 2: ");
    gets(str2);

    printf("\n--- Built-in String Functions ---\n");

    // strlen()
    printf("Length of str1 = %lu\n", strlen(str1));

    // strrev() is not standard in some compilers (only in Turbo C), so we'll skip or create a custom one if needed

    // strlwr()
    printf("Lowercase str1 = %s\n", strlwr(str1));

    // strupr()
    printf("Uppercase str2 = %s\n", strupr(str2));

    // strcpy()
    strcpy(str1, str2);
    printf("After copying str2 to str1: %s\n", str1);

    // strcmp()
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal\n");
    else if (result > 0)
        printf("str1 is greater than str2\n");
    else
        printf("str1 is less than str2\n");

    return 0;
}
