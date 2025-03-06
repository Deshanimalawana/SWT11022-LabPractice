#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int studentID = 12345;
    float GPA = 3.75;
    char grade [10]='A';

    //updated value
    studentID = 54321;
    GPA = 3.90;
    grade [10] = 'A';
    grade[3] = '+';

    printf("student ID no is : %d\n",studentID);
    printf("Your GPA is : %.2f\n",GPA);
    printf("Your Grade is : %c\n",grade);
    return 0;
}
