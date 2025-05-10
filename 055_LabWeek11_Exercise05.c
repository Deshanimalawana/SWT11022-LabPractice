#include <stdio.h>

int main() {
    int marks[2][5];

    printf("Enter marks of 5 subjects for 2 students:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("Marks of students:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
