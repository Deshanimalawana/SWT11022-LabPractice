#include<stdio.h>
int main (){
int studentID=54321;
float GPA=3.90;
char grade[]="A+";
grade[0]='A';
grade[1]='+';
printf("studentID:%d\n GPA:%.2f\n grade:%s\n",studentID,GPA,grade);
return 0;
}
