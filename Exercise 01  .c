#include <stdio.h>
int main()
{
    int marks[5];
    marks[0] = 98;
    int age[5] = {21,21,23,24,25};

    age[1] = 27;

    int students_marks[5];
    printf("Enter marks for 5 Students : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &students_marks[i]);
    }
    printf("Student's Marks : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d Marks : %d \n",i + 1,students_marks[i]);
    }
    return 0;
}
