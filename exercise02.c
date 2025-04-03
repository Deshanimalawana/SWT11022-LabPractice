#include <stdio.h>

int main() {

    int marks[6];


    int total = 0;
    float average;


    printf("Enter the marks for 6 subjects:\n");


    for (int i = 0; i < 6; i++) {

        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);


        total += marks[i];
    }


    average = total / 6.0;


    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}

