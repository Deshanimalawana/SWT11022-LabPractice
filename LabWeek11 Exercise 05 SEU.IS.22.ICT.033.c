#include <stdio.h>

int main() {
    int marks[2][5];

    for (int student = 0; student < 2; student++) {
        printf("Enter marks for Student %d (5 subjects):\n", student + 1);
        for (int subject = 0; subject < 5; subject++) {
            printf("Subject %d: ", subject + 1);
            scanf("%d", &marks[student][subject]);
        }
    }


    printf("\nStudent Marks:\n");
    for (int student = 0; student < 2; student++) {
        printf("Student %d: ", student + 1);
        for (int subject = 0; subject < 5; subject++) {
            printf("%d ", marks[student][subject]);
        }
        printf("\n");
    }

    return 0;
}
