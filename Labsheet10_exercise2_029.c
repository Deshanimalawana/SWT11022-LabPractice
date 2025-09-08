#include <stdio.h>

int main() {

    int marks[6];
    float average = 0.00;

    printf("Enter 6 subjects marks one by one:\n");

    for (int i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }


    float sum = 0.0;
    for (int i = 0; i < 6; i++) {
        sum += marks[i];
    }
    average = sum / 6.0;



    printf("\nSubject marks and Average:\n\n");
    for (int i = 0; i < 6; i++) {
        printf("Subject %d: %d\n", i + 1,marks[i]);
    }
    printf("\nAverage mark: %.2f\n",average);




    return 0;
}
