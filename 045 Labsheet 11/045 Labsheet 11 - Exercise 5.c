#include <stdio.h>

int main() {
    int marks[2][5];
    int i, x;

    for(i = 0; i < 2; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for(x = 0; x < 5; x++) {
            printf("Subject %d: ", x + 1);
            scanf("%d", &marks[i][x]);
        }
        printf("\n");
    }

    printf("Marks of students:\n");
    for(i = 0; i < 2; i++) {
        printf("Student %d: ", i + 1);
        for(x = 0; x < 5; x++) {
            printf("%d ", marks[i][x]);
        }
        printf("\n");
    }

    return 0;
}
