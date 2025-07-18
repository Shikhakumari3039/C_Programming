// TOPIC IS FILE HANDLING
//write a program creation of a file
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     FILE *fp;
//     fp = fopen("abc.txt", "w");
//     if(fp==NULL){
//         printf("Erroe in file creation");
//         exit(0);
//     }
//     printf("File creation succesfully");
//     fclose(fp);
// }

//OR
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch[100];
    fp = fopen("abc.txt", "w");
    if(fp==NULL){
        printf("Erroe in file creation");
        exit(0);
    }
    printf("Enter the Character ");
    //scanf("%c", &ch);
    gets(ch);
    //fputc(ch, fp);
    //fputs(ch, fp);
    fprintf(fp, "%s", ch);
    printf("File creation succesfully");
    fclose(fp);
}