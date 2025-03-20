#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if(marks >= 90){ printf("grade excellent\n"); }
    else if(marks>=75 && marks<90){printf("very good\n");}
    else if(marks>=50 && marks<74){printf(" good\n");}
    else {printf(" fail");}

    return 0;
}














