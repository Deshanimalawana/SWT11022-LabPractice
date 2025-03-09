#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool isRainy = "true";
    bool isHolidays = "False";
    bool isWeekend = "True";

    bool con = !isRainy && (isHolidays | isWeekend);
    printf("Is student can go trip:%s\n",con? "Yes" : "No");

    int Cmarks;
    Cmarks = 95;
    Cmarks+=5;
    printf("Updated marks is:%d", Cmarks);
    return 0;
}
