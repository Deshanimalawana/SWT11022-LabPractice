#include <stdio.h>

int main() {
    int dayOfWeek;

    printf("Enter a number (1-7) to represent the day of the week: ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Other day\n");
            break;
    }

    return 0;
}
