// write a program to create a structure of employee
// #include<stdio.h>
// struct employee 
// {
//     int eid;
//     char ename[50];
//     float esal; 
// };
// int main(){
//     struct employee e1;
//     printf("Enter the deatails of employee: ");
//     printf("\nEnter the Eid: ");
//     scanf("%d", &e1.eid);
//     getchar();
//     printf("Enter the Name: ");
//     gets(e1.ename);
//     printf("Enter the Salarys: ");
//     scanf("%f", &e1.esal);
//     printf("Display the detail of employee: ");
//     printf("Eid= %d\n", e1.eid);
//     printf("Ename= %s\n", e1.ename);
//     printf("Esal= %f\n", e1.esal);
// }

// write a program to create a structure of employee using pointer
#include<stdio.h>
struct employee 
{
    int eid;
    char ename[50];
    float esal; 
};
int main(){
    struct employee e1, *e;
    e=&e1;
    printf("Enter the deatails of employee: ");
    printf("\nEnter the Eid: ");
    scanf("%d", &e->eid);
    getchar();
    printf("Enter the Name: ");
    gets(e->ename);
    printf("Enter the Salarys: ");
    scanf("%f", &e->esal);
    printf("Display the detail of employee: ");
    printf("Eid= %d\n", e->eid);
    printf("Ename= %s\n", e->ename);
    printf("Esal= %f\n", e->esal);
}

