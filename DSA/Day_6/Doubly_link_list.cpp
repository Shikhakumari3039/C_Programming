// 
#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *pre;
    int data;
    struct node *next;
};

int main(){
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head->pre=NULL;
    head->data=46;
    head->next=NULL;
    printf("%d", head->data);
}
