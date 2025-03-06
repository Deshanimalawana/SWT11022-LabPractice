#include <stdio.h>
int main(){
int studentID;
float GPA;
char grade;

studentID=12345;
GPA=3.75;
grade='A';

printf("%d,%.2f,%c\n",studentID,GPA,grade);

studentID=54321;
GPA=3.90;
grade='A+';

printf("%d,%.2f,%c",studentID,GPA,grade);

}


