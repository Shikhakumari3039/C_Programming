#include <stdio.h>
 
// void max(int n,int arr[]){
//     int m=arr[0];
//     for(int i=1;i<n;i++){
//         if(m<arr[i]){
//             m=arr[i];
//         }
//     }
//     printf("maximum is : %d",m);
// }
 
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[100];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     max(n,arr);
 
//     return 0;
// }

void s(int n, int arr[]){
    for(int j=0; j<n; j++){
         if(arr[j]%2==0){
             printf("%d ",arr[j]);
        }
        else{
            printf("* ");
        }
    }
}

int main(){
    int n, arr[100];
    printf("Enter the numbers: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    s(n,arr);
}
