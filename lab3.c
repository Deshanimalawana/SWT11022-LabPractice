#include<stdio.h>
int main(){
int studentID;
float GPA;
char grade;
studentID=12345;
GPA=3.75;
grade='A';

studentID=54321;
GPA=3.90;
grade='A+';
printf("%d\n%.2f\n%c",studentID,GPA,grade);
return 0;
}
