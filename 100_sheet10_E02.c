#include <stdio.h>

int main() {
    int marks[6]; // Array to store six subject marks
    float average, sum = 0; // Variables to store sum and average

    // Prompting user to enter marks
    printf("Enter marks for six subjects:\n");

    // Loop to get input from user
    for(int i = 0; i < 6; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; // Adding marks to sum
    }

    // Calculating average
    average = sum / 6;

    // Displaying the marks and average
    printf("\nMarks entered: ");
    for(int i = 0; i < 6; i++) {
        printf("%d ", marks[i]);
    }
    printf("\nAverage Marks: %.2f\n", average);

    return 0;
}
