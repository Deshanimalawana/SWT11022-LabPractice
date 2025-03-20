#include <stdio.h>
int main(){
    int dayofweek;

    printf("Enter the day of the week (1-7): ");
    scanf("%d", &dayofweek);

    switch (dayofweek){
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("other day\n");
            break;
        }

    return 0;
}
