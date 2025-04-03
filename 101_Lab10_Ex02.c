#include <stdio.h>

int main() {
    int marks[6];
    float average = 0;
    int sum = 0;

    printf("Enter the marks of six subjects:\n");

    for (int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6.0;

    printf("\nThe marks of the student are:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    printf("The average mark is: %.2f\n", average);



}
