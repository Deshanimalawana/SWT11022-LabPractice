#include <stdio.h>
int main() {
 int studentID=12345;
 float GPA=3.75;
 char*grade="A";

 printf("Initial Values:\n");
 printf("studentID:%d\n", studentID);
 printf("GPA:%.2f\n",GPA);
 printf("Grade:%s\n",grade);

 //updated

 studentID=54321;
 GPA=3.90;
 grade="A+";

 printf("\nUpdated Values:\n");
 printf("studentID:%d\n",studentID);
 printf("GPA:%.2f\n",GPA);
 printf("Grade:%s\n",grade);

 return 0;
 }
