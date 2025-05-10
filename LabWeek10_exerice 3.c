#include <stdio.h>

int main() {
    int marks[6];
    float average, sum = 0;

    printf("Enter marks for 6 subjects: ");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6;

    printf("Marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }

    printf("\nAverage: %.2f\n", average);

    return 0;
}
