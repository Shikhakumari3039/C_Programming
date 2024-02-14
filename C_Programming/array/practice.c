#include<stdio.h>
int main (){
    int a ;
    printf("Enter the number:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<a; j++){
        printf("%d ",arr[j]);
    }
}