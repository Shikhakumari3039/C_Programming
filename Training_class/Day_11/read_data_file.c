//write a program  read a data from files using fgetc
#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    int ch[100];
    fp = fopen("abc.txt", "r");  
    if (fp == NULL) {
        printf("Error opening file");
        exit(0);
    }
    fscanf(fp, "%[^\n]", ch);
    printf("%s", ch);
    printf("File read succeefully:\n");
    // while ((ch = fgetc(fp)) != EOF) {
    //     printf("%c", ch);
    // }
    fclose(fp);
}