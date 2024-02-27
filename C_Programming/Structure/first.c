#include<stdio.h>
#include<string.h>
struct Student{
    int id;
    int marks;
    char fav_char;
    char name[30];
};
int main(){
    struct Student shikha, aditi, shubham;
    shikha.id=1;
    aditi.id=2;
    shubham.id=3;
    shikha.marks=400;
    aditi.marks=500;
    shubham.marks=600;
    shikha.fav_char='s';
    aditi.fav_char='a';
    shubham.fav_char='j';
    strcpy(shikha.name, "shikha kumari student of the year");
    printf("Shikha got %d marks\n", shikha.marks);
    printf("Shikha's name is %s\n", shikha.name);
    printf("Aditi got %d marks\n", aditi.marks);
    printf("Shubham got %d marks\n", shubham.marks);
    return 0;
}