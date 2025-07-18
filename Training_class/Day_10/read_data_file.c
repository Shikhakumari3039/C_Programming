//write a program to read a data from files
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch[100];
    fp = fopen("abc.txt", "r");
    if(fp==NULL){
        printf("Error in file creation");
        exit(0);
    }
    //ch =fgetc(fp);
    fgets(ch, 100, fp);
    printf("%s", ch);
    printf("File creation succesfully");
    fclose(fp);
}