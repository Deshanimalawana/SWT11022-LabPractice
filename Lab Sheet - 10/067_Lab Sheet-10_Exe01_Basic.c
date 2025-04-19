#include <stdio.h>
int main ()
{

    int marks[5];
    marks[0] = 98;

    int Age[5] = {21,21,23,24,25};
    Age[1] = 27;

    int students_marks[5];
    printf("Enter the Student's Marks :- ");
    for (int a = 1; a < 6; a++) {
            scanf("%d", &students_marks[a]);
            printf("Student %d Marks is = %d\n", a, students_marks[a]);
    }

    printf("\nMarks [0] is = %d\n",marks[0]);
    printf("Age[1] is = %d\n", Age[1]);

    return 0;
}
