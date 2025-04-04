#include <stdio.h>
int main ()
{
    int a,b,c;

    printf("Enter Three Numbers:- ");
    scanf("%d %d %d", &a,&b,&c);

    if (a>=b && b>=c) {
        printf("The Largest number is :- %d\n", a);
    }else if (b>=a && b>=c) {
        printf("The Largest number is :- %d\n", b);
    }else {
        printf("The Largest number is :- %d\n", c);
    }
    return 0;
}
