#include<stdio.h>
int main()
{
    int dayofweek;

    printf("Enter Day OF week: ");
    scanf("%d",&dayofweek);

    switch (dayofweek){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednsday\n");
            break;
        default:
            printf("Other Days\n");

    }
    return 0;
}
