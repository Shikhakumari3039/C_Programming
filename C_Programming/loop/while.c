#include<stdio.h>
// int main(){
//     int i=1;

//     while(i<=5){
//         printf("%d\n",i);
//         i++;
//     }   
// }

int main(){
    int a;
    int bits;
    scanf("%d",&bits);
    while(1){
        if(bits ==-1){
            break;
        }
        if(bits ==1){
            a++;
        }
    }
    if(a%2==0){
        printf("1");
    }
    else{
        printf("0");
    }
}
