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

//2. 
#include <stdio.h>
struct emp1 {
    int eid;
    char ename[20];
    float esal;
};
union emp2 {
    int eid;
    char ename[20];
    float esal;
};
int main() {
    printf("Size of structure = %lu bytes\n", sizeof(struct emp1));
    printf("Size of union = %lu bytes\n", sizeof(union emp2));
    return 0;
}
