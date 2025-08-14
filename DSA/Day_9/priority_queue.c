// priority Queue
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data, pn;           //pn=priority
    struct node *next;
};
struct node *f =NULL;
void insert(int data, int pn){
    struct node *temp, *p;              // p = current value
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->pn = pn;
    temp->next = NULL;
    if (f == NULL || pn < f->pn) {
        temp->next = f;
        f = temp;
    } else {
        p=f;
        while (p->next != NULL && p->next->pn <= pn) {
            p = p->next;
        }
        temp->next = p->next;
        p->next = temp;
    }
}
void display() {
    struct node *temp =f;
    if (f == NULL) {
        printf("Queue is empty\n");
    }
    while (temp != NULL) {
        printf("Data: %d, Priority: %d\n", temp->data, temp->pn);
        temp = temp->next;
    }
}
void delete(){
    if (f == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct node *temp = f;
    printf("Deleted element: %d with priority %d\n", temp->data, temp->pn);
    f = f->next;
    free(temp);
}
void main(){
    int a, data, pn;
    printf("Press 1 for insert\n");
    printf("Press 1 for display\n");
    printf("Press 1 for delete\n");
    while(1){
        printf("\nEnter your choice\n");
        scanf("%d", &a);
        switch(a){
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority: ");
                scanf("%d", &pn);
                insert(data, pn);
                break;
            case 2:
                display();
                break;
            case 3:
                delete();
                break;
            default:
                printf("invalid");
        }
    }
}

