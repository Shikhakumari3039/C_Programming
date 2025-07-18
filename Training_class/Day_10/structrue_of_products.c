// write a program to create a array of structure to show the details of products(pid, pname, pquantity, pprice) // home work
// -> the show the product detail in sorted manner according to pname.
// -> the show the data in tabular formate.

#include <stdio.h>
#include <string.h>
struct product {
    int pid;
    char pname[100];
    float pquan;
    int pprice;
};
int main() {
    struct product p[100], temp;
    int i, j, n;
    printf("Enter the number of products: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Product ID: ");
        scanf("%d", &p[i].pid);
        getchar();  // to consume newline after int input
        printf("Product Name: ");
        gets(p[i].pname);  // unsafe but as per your code
        printf("Quantity: ");
        scanf("%f", &p[i].pquan);
        printf("Price: ");
        scanf("%d", &p[i].pprice);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strcmp(p[i].pname, p[j].pname) > 0) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    printf("\n%-10s %-20s %-10s %-10s\n", "PID", "Product Name", "Quantity", "Price");
    printf("---\n");
    for(i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10d\n", p[i].pid, p[i].pname, p[i].pquan, p[i].pprice);
    }
}
