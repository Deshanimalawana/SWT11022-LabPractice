#include <stdio.h>
#include <stdlib.h>

int main(){
   int marks[2][5];
    int i, j;

    for (i = 0; i < 2; i++) {
        printf("Student %d :\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Enter mark for %d subject : ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Subject %d: %d\n", j + 1, marks[i][j]);
        }
    }

    return 0;
}

