
//write a program  for specific location move krne ke liye - use fseek
#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp;
    fp=fopen("seek.txt", "w");
    if(fp==NULL){
        printf("Error opening file");
        exit(0);
    }
    fputs("this is universal", fp);
    fseek(fp,8, SEEK_SET);
    fputs("Vaishanv Institute", fp);
    printf("Data write successfully");
    fclose(fp);
}
