// structure in c
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

//structure using pointer
// #include<stdio.h>
// struct employee 
// {
//     int eid;
//     char ename[50];
//     float esal; 
// };
// int main(){
//     struct employee e1, *e;
//     e=&e1;
//     printf("Enter the deatails of employee: ");
//     printf("\nEnter the Eid: ");
//     scanf("%d", &e->eid);
//     getchar();
//     printf("Enter the Name: ");
//     gets(e->ename);
//     printf("Enter the Salarys: ");
//     scanf("%f", &e->esal);
//     printf("Display the detail of employee: ");
//     printf("Eid= %d\n", e->eid);
//     printf("Ename= %s\n", e->ename);
//     printf("Esal= %f\n", e->esal);
// }

// structure using array
// #include<stdio.h>
// struct employee 
// {
//     int eid;
//     char ename[50];
//     float esal; 
// };
// int main(){
//     struct employee e1[100];
//     int i, n;
//     printf("Enter the number of employee: ");
//     scanf("%d", &n);
//     printf("Enter the details of employee:\n ");
//     for(i=0; i<n; i++){
//          printf("\nEnter the Eid: ");
//         scanf("%d", &e1[i].eid);
//         getchar();
//         printf("Enter the Name: ");
//         gets(e1[i].ename);
//         printf("Enter the Salarys: ");
//         scanf("%f", &e1[i].esal);
//     }
    // for(i=0; i<n; i++){
    //     printf("Display the detail of employee: ");
    //     printf("Eid= %d\n", e1[i].eid);
    //     printf("Ename= %s\n", e1[i].ename);
    //     printf("Esal= %f\n", e1[i].esal);
    // }
// }

// write a program to create a array of structure to show the details of products(pid, pname, pquantity, pprice) // home work
// -> the show the product detail in sorted manner according to pname.
// -> the show the data in tabular formate.
// #include<stdio.h>
// struct employee 
// {
//     int pid;
//     char pname[100];
//     float pquan;
//     int pprice; 
// };
// int main(){
//     struct product p[100];
//     int i, n;
//     printf("Enter the number of products: ");
//     scanf("%d", &n);
//     printf("Enter the details of product:");
//     for(i=0; i<n; i++){
//          printf("\nEnter the Pid: ");
//         scanf("%d", &p[i].pid);
//         getchar();
//         printf("Enter the Name: ");
//         gets(e1[i].pname);
//         printf("Enter the Quantity: ");
//         scanf("%f", &p[i].pquan);
//         printf("Enter the Salarys: ");
//         scanf("%f", &p[i].pquan);
//     }
//     for(i=0; i<n; i++){
//         printf("Display the detail of employee: ");
//         printf("Eid= %d\n", e1[i].eid);
//         printf("Ename= %s\n", e1[i].ename);
//         printf("Esal= %f\n", e1[i].esal);
//     }
// }

//structure passing into a function
// #include<stdio.h>
// struct employee 
// {
    // int eid;
    // char ename[50];
    // float esal; 
// };
// void display(struct employee e1){
//     printf("Display the detail of employee: ");
//     printf("Eid= %d\n", e1.eid);
//     printf("Ename= %s\n", e1.ename);
//     printf("Esal= %f\n", e1.esal);
// }
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
//     display(e1);
// }

// passing of array structure into a function
// #include<stdio.h>
// struct employee 
// {
//     int eid;
//     char ename[50];
//     float esal; 
// };
// void display(struct employee e1[], int n){
//     int i;
//    for(i=0; i<n; i++){
//         printf("Display the detail of employee: ");
//         printf("Eid= %d\n", e1[i].eid);
//         printf("Ename= %s\n", e1[i].ename);
//         printf("Esal= %f\n", e1[i].esal);
//     }
// }
// int main(){
//     struct employee e1[100];
//     int i, n;
//     printf("Enter the number of employee: ");
//     scanf("%d", &n);
//     printf("Enter the details of employee:\n ");
//     for(i=0; i<n; i++){
//         printf("\nEnter the Eid: ");
//         scanf("%d", &e1[i].eid);
//         getchar();
//         printf("Enter the Name: ");
//         gets(e1[i].ename);
//         printf("Enter the Salarys: ");
//         scanf("%f", &e1[i].esal);
//     }
//     display(e1, n);
// }

// DIIFFERENCE  STRUCTURE BETWEEN UNION
//1.
// #include<stdio.h>
// struct emp1
// {
//     int eid;
//     char ename[20];
//     float esal;
// };

// union emp2 {
//     int eid;
//     char ename[20];
//     float esal;
// };
// void main(){
//     printf("Sizeof structure =%d\n", sizeof(struct emp1));
//     printf("Sizeof union =%d", sizeof(union emp2));
// }

//2. // check proper
// #include<stdio.h>
// struct emp1 {
//     int eid;
//     char ename[20];
//     float esal;
// };
// union emp2 {
//     int eid;
//     char ename[20];
//     float esal;
// };
// void main(){
//     printf("Sizeof structure =%d\n", sizeof(struct emp1));
//     printf("Sizeof union =%d", sizeof(union emp2));
// }


// TOPIC IS FILE HANDLING
//creation of a file
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp;
//     fp = fopen("abc.txt", "w");
//     if(fp==NULL){
//         printf("Erroe in file creation");
//         exit(0);
//     }
//     printf("File creation succesfully");
//     fclose(fp);
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp;
//     char ch[100];
//     fp = fopen("abc.txt", "w");
//     if(fp==NULL){
//         printf("Erroe in file creation");
//         exit(0);
//     }
//     printf("Enter the Character ");
//     //scanf("%c", &ch);
//     gets(ch);
//     //fputc(ch, fp);
//     //fputs(ch, fp);
//     fprintf(fp, "%s", ch);
//     printf("File creation succesfully");
//     fclose(fp);
// }

// write a string  data using fputc
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     FILE *fp;
//     char ch[100];
//     int i;
//     fp = fopen("abc.txt", "w");
    // if(fp==NULL){
    //     printf("Erroe in file creation");
    //     exit(0);
    // }
//     printf("Enter the Character ");
//     gets(ch);
//     fprintf(fp, "%s", ch);
//     for(i=0; i!=strlen(ch); i++){
//         fputc(ch[i], fp);
//     }
//     printf("File creation succesfully");
//     fclose(fp);
// }

//read a data from files
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