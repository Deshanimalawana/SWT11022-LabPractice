#include <stdio.h>
int studentID;
float GPA;
char grade[3];

int main () {
     studentID=12345;
     GPA=3.75;
     grade[3]='A';

     studentID=54321;
     GPA=3.90;
     grade[3];
     strcpy(grade,"A+");


     printf("Update studentID %d\n",studentID);
     printf("Update GPA %.2f\n",GPA);
     printf("Update grade %s\n",grade);
     return 0;
     }
