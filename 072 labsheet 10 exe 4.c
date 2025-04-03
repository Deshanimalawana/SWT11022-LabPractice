#include <stdio.h>

int main() {

    float marks[10];


    float max_mark;


    printf("Enter marks for 10 students:\n");


    for (int i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }


    max_mark = marks[0];


    for (int i = 1; i < 10; i++) {
        if (marks[i] > max_mark) {
            max_mark = marks[i];
        }
    }


    printf("Maximum mark: %.2f\n", max_mark);

    return 0;
}
