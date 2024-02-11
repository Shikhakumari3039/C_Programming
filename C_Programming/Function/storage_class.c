//local variable

#include <stdio.h>
// int main(void) {
//     int i;
  
//   for (int i = 0; i < 5; ++i) {
//      printf("C programming");
//   }
//   printf("%d", i);  
//   return 0;
// }


//global variables

// void display();
// int n = 5;
// int main()
// {
//     ++n;     
//     display();
//     return 0;
// }
// void display()
// {
//     ++n;   
//     printf("n = %d", n);
// }

//static variable

#include <stdio.h>
void display();

int main()
{
    display();
    display();
}
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}

