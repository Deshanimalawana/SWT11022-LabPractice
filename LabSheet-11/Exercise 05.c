#include <stdio.h>

int main() {
    int marks[2][5];

    for (int i = 0; i < 2; i++) {
        printf("Enter marks for student %d (5 subjects): ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("Student %d marks: ", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
