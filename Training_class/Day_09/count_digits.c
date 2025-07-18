// wap to count the number of digits, alphabate and special character in a give strings
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, alph=0, special=0, digits=0, len;
    printf("Enter the Strings: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            alph++;
        }
        else if(str[i]>=48 && str[i]<=57){
            digits++;
        }
        else{
            special++;
        }
    }
    printf("Alphabets: %d\n", alph);  
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", special);
}  
