#include <stdio.h>

int main() {
    float marks[10];
    float max_value;

    printf("Enter the marks for 10 students:\n");


    for (int x = 0; x < 10; x++) {
        scanf("%f", &marks[x]);
    }

    max_value = marks[0];
    for (int x = 1; x < 10; x++) {
        if (marks[x] > max_value) {
            max_value = marks[x];
        }
    }

    printf("The maximum mark is: %.2f\n", max_value);

    return 0;
}
