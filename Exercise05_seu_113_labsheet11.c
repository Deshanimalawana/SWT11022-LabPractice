#include <stdio.h>

int main()
{
    int user1Marks[5], user2Marks[5];
    int i;

    printf("Enter 5 Subject Marks for First Student:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &user1Marks[i]);
    }

    printf("Enter 5 Subject Marks for Second Student:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &user2Marks[i]);
    }

    printf("\nMarks of First Student: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", user1Marks[i]);
    }

    printf("\nMarks of Second Student: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", user2Marks[i]);
    }

    return 0;
}
