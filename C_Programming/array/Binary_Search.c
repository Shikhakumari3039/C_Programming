#include <stdio.h>
 
int main() {
    int arr[100] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int s=0;
    int e=9;
    int search;
    printf("Enter the number to search: ");
    scanf("%d",&search);
    int temp=0;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==search){
            temp=1;
            break;
        }
        else if(arr[mid]>search){
            e=mid-1;
        }
        else if(arr[mid]<search){
            s=mid+1;
        }
    }
    if(temp==1){
        printf("Present");
    }else{
        printf("Not present");
    }
 
    return 0;
}