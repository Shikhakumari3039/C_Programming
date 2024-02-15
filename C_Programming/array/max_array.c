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

void min(int n, int arr[]){
    int m=arr[0];
    for(int i=1; i<n; i++){
        if(m>arr[i]){
            m = arr[i];
        }
    }
    printf("min is %d", m);
}
int main(){
    int n, arr[100];
    printf("Enter the numbers: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    min(n, arr);
}