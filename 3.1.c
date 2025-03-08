#include<stdio.h>
int main(){

int studentID;
float GPA;
char grade;

studentID=12345;
GPA=3.75;
grade='A';


printf("The student ID:%d\n",studentID);
printf("The GPA:%f\n",GPA);
printf("The Grade:%c\n",grade);

studentID=54321;
GPA=3.90;
grade='A+';


printf("The updated student ID:%d\n",studentID);
printf("The updated GPA:%f\n",GPA);
printf("The updated Grade:%c\n",grade);


return 0;
}
