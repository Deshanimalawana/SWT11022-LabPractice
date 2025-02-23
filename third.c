#include<stdio.h>

int main(){
   char name[20];
   int a,b;
   int  c,f;
   char val[]="welcome";
   a=10;
   const float x=3.73;

   printf("Enter your name: ");
    scanf("%s", name);
    printf("%s", val);
    printf("\nYour name is: %s.", name);
    c = 90.0 * 3.0;
    printf("\n Value of c: %f",c);

    b=10;
    printf("\n Value of x: %f",x);
    printf("\n You \n are \n learning \' c \' language \n Do you know C language?\n");
     return 0;
}
