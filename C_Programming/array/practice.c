#include<stdio.h>
// int main (){
//     int a ;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0; i<a; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int j=0; j<a; j++){
//         printf("%d ",arr[j]);
//     }
// }

// int main(){
//     int a, arr[100];
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     for(int i=0; i<a; i++){
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0){
//             printf("%d",arr[i]);
//         }
//     }
    
// }



// void c(int a, int arr[]){
//     int temp=0;
//     for(int i=0; i<a; i++){
//         temp+=arr[i];
//     }
//     printf("%d",temp);
// }
// int main(){
//     int a, arr[100];
//     printf("Enter the number: ");
//     scanf("%d",&a);
//     for(int i=0; i<a; i++){
//         scanf("%d", &arr[i]);
//     }
//     c(a,arr);
// }
//  int main (){
//     int a ;
//     printf("Enter the number:");
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0; i<a; i++){
//         scanf("%d", &arr[i]);
//     }
//     for(int j=0; j<a; j++){
//         printf("%d ",arr[j]);
//     }
// }


int main() {
   int arr[10], n,l=0;
   printf("Enter the element:");
   scanf("%d",&n);
   int i=0;
   for(int i=0; i<n; i++){
       scanf("%d", &arr[i]);
   }
   l=arr[0];
   for(i = 1; i < n; i++) {
        if(arr[i] > l) {
            l = arr[i]; 
        }
    }
    printf("largest number is: %d\n",l);
}