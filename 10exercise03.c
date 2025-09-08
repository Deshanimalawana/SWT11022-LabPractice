#include <stdio.h>
int main() {
    float marks[10];
    float max_value;

   printf("Enter the marks of 10 students:\n");

   for(int i = 0; i < 10; i++) {
        scanf("%f", &marks[i]);
    }

        max_value = marks[0];

        for(int i = 1; i < 10; i++) {
        if(marks[i] > max_value) {
            max_value = marks[i];
        }
    }
      printf("The maximum mark is: %.2f\n", max_value);

    return 0;
}
