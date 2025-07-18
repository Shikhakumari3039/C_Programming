// write a program to copy a data into a another file
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // Open source file in read mode
    fp1 = fopen("AA.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    // Open target file in write mode
    fp2 = fopen("BB.txt", "w");
    if (fp2 == NULL) {
        printf("Error creating target file.\n");
        fclose(fp1);
        exit(1);
    }
    // Copy content character by character
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }
    printf("File copied successfully.\n");
    fclose(fp1);
    fclose(fp2);
}

