//write a program to create a structure using uppend mode 
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rno;
    char name[50];
    float per;
}s;
void main(){
    FILE *fp;
    char ch[100];
    int i;
    fp=fopen("aa.txt", "a");
    if(fp==NULL){
        printf("Error opening file");
        exit(0);
    }
    printf("Enter the String: ");
    gets(ch);
    for(i=0; i!=strlen(ch); i++){
        fputs(ch[i], fp);
    }
    printf("file wite sucessfully");
    fclose(fp);
}