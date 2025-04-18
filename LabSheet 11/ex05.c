#include <stdio.h>

int main() {
    int marks[2][5];
    int i, j;

    for(i = 0; i < 2; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for(j = 0; j < 5; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n--- Students' Marks ---\n");
    for(i = 0; i < 2; i++) {
        printf("Student %d: ", i + 1);
        for(j = 0; j < 5; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
