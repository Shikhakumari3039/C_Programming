int main(){
    int a, digit, sum=0;
    printf("Enter the numbers: ");
    scanf("%d", &a);
    if(a<0){
        printf("Enter positive number");
    }
    else if(a==0) {
        printf("sum=%d", sum);
    }
    else{
       while (a > 0) {
            digit = a % 10;
            sum += digit;
            a = a / 10;
        }
        printf("Sum  = %d", sum); 
    }

}