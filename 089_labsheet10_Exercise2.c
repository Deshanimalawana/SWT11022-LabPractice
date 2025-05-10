#include <stdio.h>

int main() {
    int marks[6];
    float average, sum = 0;

    printf("Enter the marks:");


    for (int i = 0; i < 6; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 6;


    printf("Entered Marks:\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i , marks[i]);
    }
    printf("Average Marks: %f\n", average);

    return 0;
}
