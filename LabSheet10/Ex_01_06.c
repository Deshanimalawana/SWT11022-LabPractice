#include <stdio.h>

int main() {

    float marks[6];

    float average;

    printf("Enter the student's marks for 6 subjects:\n");

    for(int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i+1);
        scanf("%f", &marks[i]);

        while(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark! Please enter a value between 0 and 100: ");
            scanf("%f", &marks[i]);
        }
    }

    float sum = 0;
    for(int i = 0; i < 6; i++) {
        sum += marks[i];
    }
    average = sum / 6;

    printf("\nStudent's Marks:\n");
    for(int i = 0; i < 6; i++) {
        printf("Subject %d: %.2f\n", i+1, marks[i]);
    }
    printf("\nAverage Mark: %.2f\n", average);

    return 0;
}
