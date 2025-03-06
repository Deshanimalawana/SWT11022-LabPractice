#include <stdio.h>
#include <stdlib.h>
#include <conio.h.>
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


    printf("Your Student ID is :- %d\n",studentID);
    printf("Your GPA is :- %.2f\n",GPA);
    printf("Your Grade is :- %s\n",grade);
    return 0;

}
