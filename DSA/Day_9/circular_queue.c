// circular queue
#include<stdio.h>
#define size 5
int q[size];
int data, f=-1, r=-1;
void insert(){
    printf("Enter a data\n");
    scanf("%d", &data);
    if((r+1)%size==f){
        printf("Overflow");
        return;
    }
    else if(f==-1 &&r==-1){
        r=f=0;
        q[r]=data;
    }
    else{
        r=(r+1)%size;
        q[r]=data;
    }
}
void delete(){
    if(f==-1 &&r==-1){
        printf("Queue is empty\n");
        return;
    }
    printf(Deleted element =%d\n, q[f]);
    else if(f==r){
        f=r=-1;
    }
    else{
        f= (f+1)%size;
    } 
}
void display(){
    int i=f;
    if(f==-1 && r==-1){
        printf("under flow");
    }
    else{
    //     do{
    //         printf("%d", q[i]);
    //         i= (i+1) % size;
    //     }
    //     while(i! = (r+1) % size);
    for (int i = f; i <= r; i++) {
            printf("%d ", q[i]);
        }
    }
}
void main(){
    int a;
    printf("Press 1 for insert\n");
    printf("Press 1 for display\n");
    printf("Press 1 for delete\n");
    while(1){
        printf("\nEnter your choice\n");
        scanf("%d", &a);
        switch(a){
            case 1:
                insert();
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