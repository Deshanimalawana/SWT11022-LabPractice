#include <stdio.h>
int main()
{
    int studentID=12345;
    float GPA= 3.75;
    char*grade= "A";

    printf("Initial Values:\n");
    printf("StudentID: %d\n", studentID);
    printf("GPA: %.2f\n",GPA);
    printf("Grade: %s\n", grade);

    studentID= 54321;
    GPA =3.90;
    grade= "A+";

    printf("\nUpdate Values:\n");
    printf("StudentID: %d\n", studentID);
    printf("GPA: %.2f\n", GPA);
    printf("Grade: %s\n", grade);

    return 0;
}
