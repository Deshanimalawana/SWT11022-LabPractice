#include <stdio.h>
int main ()
{
    int studentID;
    float GPA;
    char grade[3];

    studentID=12345;
    GPA =3.75;
    grade[0] ='A';


  studentID=54321;
    GPA =3.90;
    grade[0] ='A';
    grade[1]='+';
    grade[2]='\0';

    printf("your id is :%d\n",studentID);
    printf("your GPA is :%f\n",GPA);
    printf("your gade is :%s\n",grade);

    return 0;
}
