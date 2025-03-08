int main() {
    int studentID = 12345;
    float GPA = 3.75;
    char grade = 'A';

    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %c\n", grade);

    studentID = 54321;
    GPA = 3.90;
    grade = 'A'+1;

    printf("\nUpdated Details:\n");
    printf("Student ID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %c\n", grade);

    return 0;
}
