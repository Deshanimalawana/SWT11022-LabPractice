#include <stdio.h>
int main(){

    int dayOfWeek;
    printf("Enter number Fisrt 3 day of a week: ");
    scanf("%d",&dayOfWeek);

    switch(dayOfWeek){
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
            printf("Other day\n");
    }

return 0;
}
