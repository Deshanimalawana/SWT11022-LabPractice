#include <stdio.h>
int main(){
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';
    printf("StudentID: %d\n", studentID);
    printf("your GPA: %f\n", GPA);
    printf("your Grade: %c\n", grade);

    studentID =54321;
    GPA = 3.90;
    grade = 'A','+';
    printf("\nUpdated Details: \n");
    printf("StudentID: %d\n", studentID);
    printf("your GPA: %.2f\n", GPA);
    printf("your Grade: %c", grade);
    printf("+");
    return 0;
}
