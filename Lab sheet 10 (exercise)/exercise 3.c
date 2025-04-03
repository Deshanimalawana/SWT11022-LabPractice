#include <stdio.h>

int main() {
    float marks[10], max;

    printf("Enter 10 marks:\n");
    for (int i = 0; i < 10; i++) {
            scanf("%f", &marks[i]);
    }

    max = marks[0];
    for (int i = 1; i < 10; i++)
        if (marks[i] > max) max = marks[i];

    printf("Maximum mark: %.2f\n", max);
    return 0;
}
