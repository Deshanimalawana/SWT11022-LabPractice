 #include <stdio.h>

int main() {
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    // Display initial values
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %c\n", grade);

    // Update values
    studentID = 54321;
    GPA = 3.90;
    grade = 'A+';

    // Display updated values
    printf("\nUpdated Student ID: %d\n", studentID);
    printf("Updated GPA: %.2f\n", GPA);
    printf("Updated Grade: %c\n", grade);

    return 0;
}
