#include <stdio.h>
#include <stdbool.h>
int main ()
{
    bool isRainy = true;
    bool isHoliday = true;
    bool isWeekend = false;

    if (!isRainy && (isHoliday || isWeekend)) {
        printf("The Trip will happen, The student can go to the trip.\n\n");
    }else {
        printf("The Trip will not happen, The student can't go to the trip.\n\n");
    }

    int marks;
    printf("Enter Student's Current marks :- ");
    scanf("%d", &marks);
    marks += 5;

    printf("The Student's Updated marks is :- %d\n", marks);

    return 0;
}
