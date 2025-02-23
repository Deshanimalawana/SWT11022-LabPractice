#include <stdio.h>

    int main()

    {

    //variable declaration
    char name[20];
    int a, b;
    float c, f;

    //variable initialization
    char val[] = "Welcome";
    a= 10;

    //Defining Constants
    const float x = 3.73;

    //Inteaction with the user

        printf("Enter your name: ");
        scanf("%s", &name);
        printf(val);

    printf("\nYour name is %s", name);
    c= 90.0*3.0;
    printf("\nValue of c: %f", c);
    printf("\nValue of X: %f", x);


    //using the escape sequances
    printf("\n\n Hello World\n\n");


    printf("You\nare\nlearning\n'c' language.\nDo you know C language?");
 return 0;
}


