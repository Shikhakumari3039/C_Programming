// write a program to check either to pass or fail
 int main(){
    float s1, s2, s3, s4,s5, count=0;
    printf("Enter the marks:");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    if(s1>33)
        count++;
        if(s2<33)
            count++;
            if(s3<33)
                count++;
                if(s4<33)
                    count++;
                    if(s4<33)
                        count++;
                        if(count==0)
                            printf("pass");
                            else if(count==1)
                            printf("supply");
                            else
                            printf("fail");
}    
