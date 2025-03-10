#include <stdio.h>

int main() {
    int studentID = 54321;
    float GPA = 3.90;
    char grade = 'A';
    char val = '+';

    printf("Updated student ID: %d\n", studentID);
    printf("Updated GPA: %.2f\n", GPA);
    printf("Updated grade: %c%c\n", grade, val);

    return 0;
}
