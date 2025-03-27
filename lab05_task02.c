#include <stdio.h>

int main() {
    int number;
    printf("Enter the number.");
    scanf("%d", &number);

    if (number >= 90) {
        printf ("Grade: Excellent");
    }
    else if (number >= 75) {
        printf("Grade: Very Good");
    }
    else if (number>= 50) {
        printf( "Grade: Good");
    }
    else {
        printf("Grade: Fail");
    }

    return 0;
}
