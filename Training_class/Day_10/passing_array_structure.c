//write a program to create a passing of array structure into a function
#include<stdio.h>
struct employee 
{
    int eid;
    char ename[50];
    float esal; 
};
void display(struct employee e1[], int n){
    int i;
   for(i=0; i<n; i++){
        printf("Display the detail of employee: ");
        printf("Eid= %d\n", e1[i].eid);
        printf("Ename= %s\n", e1[i].ename);
        printf("Esal= %f\n", e1[i].esal);
    }
}
int main(){
    struct employee e1[100];
    int i, n;
    printf("Enter the number of employee: ");
    scanf("%d", &n);
    printf("Enter the details of employee:\n ");
    for(i=0; i<n; i++){
        printf("\nEnter the Eid: ");
        scanf("%d", &e1[i].eid);
        getchar();
        printf("Enter the Name: ");
        gets(e1[i].ename);
        printf("Enter the Salarys: ");
        scanf("%f", &e1[i].esal);
    }
    display(e1, n);
}