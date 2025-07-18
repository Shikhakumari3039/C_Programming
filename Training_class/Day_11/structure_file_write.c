//write a program to create a structure file write.
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rno;
    char name[50];
    float per;
}s;
void main(){
    FILE *fp;
    fp=fopen("struct.txt", "w");
    if(fp==NULL){
        printf("Error opening file");
        exit(0);
    }
    printf("Enter the name of student: ");
    gets(s.name);
    printf("Enter the roll number: ");
    scanf("%d", &s.rno);
    printf("Enter the percentage of student:");
    scanf("%f", &s.per);
    fwrite(&s, sizeof (struct Student), 1, fp);
    printf("Data write successfully");
    fclose(fp);
}