#include<stdio.h>
// int main(){
//     int values[5];
//     printf("Enter the numbers: ");
//     for(int i=0; i<5; i++){
//         scanf("%d",&values[i]);
//     }
//     printf("Displaying integers: ");
//     for(int i=0; i<5; i++){
//         printf("%d\n",values[i]);
//     }
// }

// int main(){
//     int marks[10], i, n, sum=0;
//     double average;
//     printf("Enter the numbers: ");
//     scanf("%d",&n);
//     for(i=0; i<n; i++){
//         printf("Enter number %d", i+1);
//         scanf("%d", &marks[i]);
//         sum += marks[i];
//     } 
//     average = (double) sum / n;
//     printf("Average = %2lf", average);
// }
const int city=2;
const int week=7;
int main(){
    int temperature[city][week];
    for(int i=0; i<city; i++){
        for(int j=0; j<week; j++){
            printf("%d,%d", i+1, j+1);
            scanf("%d",&temperature[i][j]);
        }
    }
    printf("\nDisplaying values:\n\n");
    for(int i=0; i<city; i++){
        for(int j=0; j<week; j++){
            printf("%d,%d =%d\n", i+1, j+1, temperature[i][j]);
        }
    }
}
