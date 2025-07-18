//write a program write string data using fputc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp;
    char ch[100];
    int i;
    fp = fopen("abc.txt", "w");
    if(fp==NULL){
        printf("Erroe in file creation");
        exit(0);
    }
    printf("Enter the Character ");
    gets(ch);
    fprintf(fp, "%s", ch);
    for(i=0; i!=strlen(ch); i++){
        fputc(ch[i], fp);
    }
    printf("File creation succesfully");
    fclose(fp);
}