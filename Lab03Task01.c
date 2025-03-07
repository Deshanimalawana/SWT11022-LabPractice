#include <stdio.h>
int main ()
{
    int studentID;
    float GPA;
    char grade[3];

    studentID=12345;
    GPA =3.75;
    grade[0] ='A';

   //Update Values
    studentID=54321;
    GPA =3.90;
    grade[0] ='A';
    grade[1]='+';
    grade[2]='\0';

    printf("Your Student ID No is :%d\n",studentID);
    printf("Your GPA is :%.2f\n",GPA);
    printf("Your grade is :%s\n",grade);

    return 0;
}

