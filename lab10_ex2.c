#include <stdio.h>

int main() {
    // Step 1
    int marks[6];

    // Step 2
    float average, sum = 0;

    // Step 3
    printf("Enter marks for 6 subjects:\n");

    // Step 4
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; // Adding to sum
    }

    // Step 5
    average = sum / 6;

    // Step 6
    printf("\nEntered marks are: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}

