#include <stdio.h>
int main(){
int studentid;
float GPA;
char grade;
char plus;

studentid = 12345;
GPA = 3.75;
grade = 'A';

printf("Your studentID is: %d\n", studentid);
printf("Your GPA is: %f\n", GPA);
printf("Your Grade is: %c\n\n", grade);

studentid = 54321;
GPA = 3.90;
grade = 'A';
plus = '+';

printf("Updated studentID is: %d\n", studentid);
printf("Updated GPA is: %f\n", GPA);
printf("Updated Grade is: %c%c\n", grade, plus);

return 0;
}
