#include<stdio.h>

int main() {
    int studentid = 12345;
    float GPA = 3.75;
    char grade[] = "A+"; // Use double quotes for string

    printf("Studentid: %d\n", studentid);
    printf("GPA: %.2f\n", GPA); // Using %.2f for formatting floating-point numbers
    printf("Grade: %s\n", grade); // Using %s for string output

    return 0;
}
