#include <stdio.h>
int main() {
    int marks[6];
    float average;
    printf("Please enter the marks for six subjects:\n");
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 6.0;
    printf("\nThe average mark is: %.2f\n", average);
    return 0;
}

