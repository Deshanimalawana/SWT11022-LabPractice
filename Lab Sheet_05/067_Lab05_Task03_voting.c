#include <stdio.h>
int main ()
{
    int Age;

    printf("Enter Age :- ");
    scanf("%d", &Age);

    if (Age >= 18) {
        printf("Eligible to Vote..!\n");
    }else {
        printf("Not Eligible to Vote..!\n");

    }
    return 0;
}
