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
    default:
        printf("Other day\n");
    }
    return 0;
}












