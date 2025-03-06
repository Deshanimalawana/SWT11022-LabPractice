#include <stdio.h>
 int main(){
     int studentId;
     float GPA;
     char grade;
     char simbol;

     studentId=12345;
     GPA=3.75;
     grade='A';
     printf("studentId:%d\n", studentId);
     printf("GPA:%f'\n", GPA);
     printf("grade:%c\n", grade);

     studentId=54321;
     GPA=3.90;
     grade='A';
     simbol='+';

     printf("Update studentId:%d\n", studentId);
     printf("Update GPA:%f\n", GPA);
     printf("Update grade:%c%c\n", grade,simbol);




     return 0;

 }
