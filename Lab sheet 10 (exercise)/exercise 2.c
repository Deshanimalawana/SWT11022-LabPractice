#include <stdio.h>

int main() {
    int marks[6];
    float average = 0;


    printf("Enter marks for 6 subjects:\n");


    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        average += marks[i];
    }


    average /= 6;


    printf("\nMarks entered: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }


    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}
