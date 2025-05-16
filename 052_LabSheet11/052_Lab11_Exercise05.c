#include <stdio.h>

int main() {
    int marks[2][5];

    for (int i = 0; i < 2; i++) {
        printf("Enter marks of 5 subjects for Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("Marks of Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
