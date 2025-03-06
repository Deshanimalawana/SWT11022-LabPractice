#include <stdio.h>
#include <stdlib.h>
int main()
{
    int studentID = 12345;
    float GPA = 3.75;
    char grade[0] ="A";

     studentID = 54321;
     GPA = 3.90;
     grade[0]='A';
     grade[1]='+';
     grade[2]='\0';


    printf("StudentID %d got %f GPA and got %s",studentID,GPA,grade);
    return 0;

}
