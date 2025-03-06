#include<stdio.h>
int main()
{
int studentID = 12345;
float GPA = 3.75;
char grade = 'A';

printf("Student ID is: %d\n",studentID);
printf("Student GPA is: %f\n",GPA);
printf("Student ID is: %c\n\n",grade);

studentID = 54321;
GPA = 3.90;
grade = 'A+';

printf("Updated ID is: %d\n",studentID);
printf("Updated GPA is: %f\n",GPA);
printf("Updated ID is: %c\n",grade);

}
