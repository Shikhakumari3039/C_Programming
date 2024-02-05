#include <stdio.h>
#include<string.h>
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     for(int i=0; i<10; i++){
//         printf("%d",arr[i]);
//     }
//     int i=0;
//     while(i<10){
//         printf("%d\n",arr[i]);
//         i++;
//     }
// }

// int main(){
//     int arr[5];
//     for(int i=0; i<5; i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Array elelments are:\n");
//     for(int i=0;i<5; i++){
//         printf("arr[%d]=%d\n",i,arr[i]);
//     }
// }

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}




