// fremaind, ftell- self read
// write a program to delete  the file
#include<stdio.h>
#include<stdlib.h>
int main(){
    int status;
    status= remove("struct.txt");             // yaha pr jo file delete krna h uska naam likh lete h to wo delete ho jaayega eg-:struct=seek
    if(status){
        printf("File was not deleted");
    }
    else{
        printf("File was deleted");
    }
}