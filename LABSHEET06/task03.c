#include<stdio.h>
int main(){
    int dayofWeekValue;

    printf("Enter day of value :");
    scanf("%d",&dayofWeekValue);

    switch (dayofWeekValue){
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wedenesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Other day\n");
    }
    return 0;
}












