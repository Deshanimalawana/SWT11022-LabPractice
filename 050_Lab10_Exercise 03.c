#include <stdio.h>

int main() {
    float marks[10];
    float max_value;
    int i;

    printf("Enter the marks for students:\n");

    for(i = 0; i < 10; i++) {
        printf("  Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    max_value = marks[0];
    for(i = 1; i < 10; i++) {
        if(marks[i] > max_value) {
            max_value = marks[i];
        }
    }
    printf("\nThe maximum mark is: %.2f\n", max_value);
    return 0;
}
