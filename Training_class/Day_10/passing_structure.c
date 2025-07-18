//write a program to create a structure passing into a function
#include<stdio.h>
struct employee 
{
    int eid;
    char ename[50];
    float esal; 
};
void display(struct employee e1){
    printf("Display the detail of employee: ");
    printf("Eid= %d\n", e1.eid);
    printf("Ename= %s\n", e1.ename);
    printf("Esal= %f\n", e1.esal);
}
int main(){
    struct employee e1;
    printf("Enter the deatails of employee: ");
    printf("\nEnter the Eid: ");
    scanf("%d", &e1.eid);
    getchar();
    printf("Enter the Name: ");
    gets(e1.ename);
    printf("Enter the Salarys: ");
    scanf("%f", &e1.esal);
    display(e1);
}