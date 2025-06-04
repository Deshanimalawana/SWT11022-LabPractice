#include <stdio.h>

int main() {
    int marks[2][5];
    const char *subjects[] = {"Math", "English", "Science", "Social Studies", "Sanskrit"};

    for (int i = 0; i < 2; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%s: ", subjects[j]);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("\nMarks for Student %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%s: %d\n", subjects[j], marks[i][j]);
        }
    }

    return 0;
}
