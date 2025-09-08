#include <stdio.h>

int main() {
    int marks[6];
    float average = 0;
    int sum = 0;

    printf("Enter marks for 6 subjects:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = (float)sum / 6;

    printf("Entered Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("Average Marks: %.2f\n", average);
    return 0;
}
