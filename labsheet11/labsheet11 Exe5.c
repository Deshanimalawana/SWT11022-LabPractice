#include <stdio.h>

int main() {
    int marks[2][5];
    int i, j;


    for (i = 0; i < 2; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }


    printf("\nStudent Marks:\n");
    for (i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("  Subject %d: %d\n", j + 1, marks[i][j]);
        }
    }

    return 0;
}
