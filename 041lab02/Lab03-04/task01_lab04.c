#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    int a=10;
    int b=1000;
    int c=20000;
    //ternary operator
    int grader = (a>b) ? printf("the largest No:%d",a): (c<b)? printf("The largest No:%d",b) : printf("The largest NO:%d",c);

    return 0;
}
