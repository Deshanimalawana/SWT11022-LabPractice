#include <stdio.h>
int main() {
    int marks[6];
    float average;
    int sum = 0;

    printf("Enter the marks for subjects:\n");

    for(int i = 0; i < 6; i++) {
        printf("  Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = (float)sum / 6;
    printf("\nMarks entered :\n");

    for(int i = 0; i < 6; i++) {
        printf("  Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("\nThe average marks are: %.2f\n", average);

    return 0;
}
