#include <stdio.h>
int main(){

    char name[20];
    int a,b;
    float c,f;
    char val[]= "Welcome";
    a = 10;
    const float x =3.73;

    printf("Enter your name: ");
    scanf("%s",name);
    printf("%s",val);

    printf("\n Your name is %s.",name);
    c = 90.0*3.0;
    printf("\nValue of c: %f",c);
    printf("\nValue of x: %f",x);

    printf("Hello\tWorld\n\n");
    printf("You\nare\nlearning\n\'c\'language\n\"Do you know C language\"");

return 0;

}
