#include <stdio.h>

int main() {
    float marks[10];
    float max;
    printf("Please enter marks for 10 students: \n");
    for(int i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    max = marks[0];
    for(int i = 1; i < 10; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }
    }
    printf("The maximum mark is: %.2f\n", max);
    return 0;
}

