#include <stdio.h>
int main ()
{
    int dayofWeek;

    printf("Enter the Number Based On day of week :- ");
    scanf("%d", &dayofWeek);

    switch (dayofWeek) {
    case 1:
        printf("It's Monday..!\n");
        break;

    case 2:
        printf("It's Tuesday..!\n");
        break;

    case 3:
        printf("It's Wednesday..!\n");
        break;

    default:
        printf("It's Other day..!\n");
        break;
    }
    return 0;
}
