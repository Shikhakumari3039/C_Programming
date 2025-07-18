//Write a program to copy a string into another string using loop 
#include<string.h>
int main(){
    char str1[100], str2[100], i;
    int len=0;
    printf("Enter the number: ");
    gets(str1);
    printf("original string are : %s\n", str1);
    while(str1[len]!='\0'){
        len++;
    }
    for(i=0; i<len; i++){
        str2[i]=str2[i];
    }
    printf("copied string are =%s", str2);
}

//WAP TO COUNT A VOWEL OR CONSONANT IN A GIVEN STRING
