// write a program to check the number even or odd.

int main(){
    int a, b,c;
    printf("Enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    
    switch(a>b){
        case 1:
        switch (a>c){
        case 1:
        printf("A is greater");
        break;
        case 0:
        printf("C is greater");
        break;
        }
    break;
    case 0:
    switch (b>c){
    case 1:
    printf("B is greater");
    break;
    case 0:
    printf("C is greater");
    break;
     }
  }
}