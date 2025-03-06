#include <stdio.h>
int main(){

int StudentID = 12345;
float GPA = 3.75;
char grade = 'A';

printf("Student Id number is :%d\n",StudentID);
printf("Student GPA is :%.2f\n",GPA);
printf("Student grade is :%c\n",grade);


StudentID = 54321;
GPA = 3.90;
char grade2[10] = "A+";

printf("Student Updated Id number is :%d\n",StudentID);
printf("Student Updated GPA is :%.2f\n",GPA);
printf("Student Updated grade is :%s\n",grade2);

return 0;



}

