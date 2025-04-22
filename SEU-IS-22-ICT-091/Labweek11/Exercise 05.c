#include <stdio.h>
#include <stdlib.h>

int main()
{
   int marks[2][5];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Mark for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        printf("\nStudent %d Marks: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf(" %d", marks[i][j]);
        }
    }

    return 0;
}
