//write a program to create a structure of file to read.
#include<stdio.h>
#include<stdlib.h>
struct Student{
    int rno;
    char name[50];
    float per;
}s;
void main(){
    FILE *fp;
    fp=fopen("struct.txt", "r");
    if(fp==NULL){
        printf("Error opening file");
        exit(0);
    }
    fread(&s, sizeof (struct Student), 1, fp);
    printf(" Name of student =%s\n", s.name);
    printf("Enter the roll number = %d\n", s.rno);
    printf("Enter the percentage of student = %f\n", s.per);
    printf("Data read successfully");
    fclose(fp);
}