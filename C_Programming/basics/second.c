#include<stdio.h>
// int main(){
//     int hundreds, tens, ones;
//     int price;
//     int money;
//     scanf("%d, %d, %d,%d",&hundreds, &tens, &ones, &price);
//     money=hundreds*100 + tens*10 + ones;
//     if(price <= money){
//         printf("1");
//     }
//     else{
//         printf("0");
//     }
// }

// int main(){
//     int a, b, c;
//     int second_largest;
//     scanf("%d, %d, %d", &a, &b, &c);
//     if((b<a && c<a) || (b>a && c>a)){
//         second_largest=a;
//     }
//     else if ((a<b && c<b) || (b<a && b<c)){
//         second_largest= b;
//     }
//     else{
//         second_largest=c;
//     }
//     printf("%d",second_largest);
// }

int main(){
    int a1, b1, c1;
    int a2, b2, c2;
    int x,y;
    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);
    x=((c1*b2 - c2*b1)/ (a1*b2- a2*b1));
    y=((c1*a2 - c2*a1)/ (a1*b2-a2*b1));

    printf("%d %d", x, y);

}